#!/usr/bin/env python

from glob import iglob as glob
from threading import Thread
import os
import sys
import time
import xml.etree.ElementTree as ET
import difflib
import optparse
from datetime import datetime
from time import time
import re
import multiprocessing
import itertools

from futures import future, add_worker
from shell import silent_shell, execute, SigKill
from copy import deepcopy
from urllib import urlopen

_DEFAULT_DIRS = [
	"backend",
	"opt",
	"C",
	"C/pragmatic",
	"C/should_fail",
	"C/should_warn",
	"C/nowarn",
	"C/gnu99",
	"C++/should_fail",
	"ack",
	"langshootout",
	"llvm" ]
_ARCH_DIRS = [
	"x86code" ]
_DEBUG = None
_VERBOSE = None
_REPORT_NAME = "stats-" +  datetime.now().strftime("%Y.%m.%d")
_EMBEDDED_CMD = re.compile("/\\*\\$ (.+) \\$\\*/")
_CMD = re.compile("(!?check(\[[0-9]+\])?|shell|cflags|ldflags)(.*)")

configurations = dict()
out=sys.stdout

_OPTS = optparse.OptionParser(version="%prog 0.1", usage="%prog [options]")
_OPTS.set_defaults(
	debug=False,
	verbose=False,
	threads=multiprocessing.cpu_count() + 1,
	show_disappeared=False,
	compiler="cparser",
	reportdir="reports/",
	builddir="build/",
	faillog_out=None,
	cflags="-march=native -O3 -std=c99",
	ldflags="-lm",
	expect_url="fail_expectations",
	runexe="")
_OPTS.add_option("-d", "--debug", dest="debug", action="store_true",
                 help="Enable debug messages")
_OPTS.add_option("-v", "--verbose", dest="verbose", action="store_true",
                 help="More output")
_OPTS.add_option("-c", "--compile-times", dest="compile_times",
                 action="store_true",
                 help="Display compile time of each program")
_OPTS.add_option("-t", "--threads", dest="threads", type="int",
                 help="Number of threads to use")
_OPTS.add_option("--faillog", dest="faillog_out",
                 help="Write faillog into file specified here")
_OPTS.add_option("--expect", dest="expect_url",
                 help="file/url with fail expectations")
_OPTS.add_option("--cflags", dest="cflags",
                 help="Use CFLAGS to compile test programs", metavar="CFLAGS")
_OPTS.add_option("--ldflags", dest="ldflags",
                 help="Use LDFLAGS to compile test programs", metavar="LDFLAGS")
_OPTS.add_option("--compiler", dest="compiler",
                 help="Use COMPILER to compile test programs",
                 metavar="COMPILER")
_OPTS.add_option("--show-disappeared", dest="show_disappeared",
                 action="store_true", help="show disappeared tests")

def ensure_dir(name):
	try:
		os.makedirs(name)
	except Exception:
		pass
	if not os.path.isdir(name):
		sys.stderr.write("Error: '%s' is not a directory\n" % name)
		sys.exit(1)

def my_execute(cmd, env=None, timeout=0):
	if _DEBUG:
		out.write(cmd + "\n")
	return execute(cmd,env,timeout)

class Test:
	def __init__(self, filename, environment):
		environment = deepcopy(environment)
		self.environment = environment
		self.id = filename
		self.compile_seconds = -1
		self.run_seconds = -1
		self.checks = []
		self.shell_cmds = []

		environment.filename = filename
		if os.path.isfile(filename+".ref"):
			environment.reference_output = open(filename+".ref").read()
		if os.path.isfile(filename+".check"):
			self._add_shell_cmd(filename+".check %(asm_file)s")
		environment.executable = environment.builddir + "/" + environment.filename + ".exe"
		self._init_flags()
		self._parse_embedded_commands(filename)

	def _init_flags(self):
		environment = self.environment
		environment.cflags += " -I%s " % os.path.dirname(environment.filename)
		if not "-O" in environment.cflags:
			environment.cflags += " -O3 "
		if not "-march" in environment.cflags:
			environment.cflags += " -march=native "

	def _add_check(self, regex, count_arg, flag):
		"""add a check for regex."""
		c = 0
		if count_arg:
			if flag:
				c = int(count_arg[1:-1])
			else:
				out.write("!check cannot be used with an argument\n")
		if _DEBUG:
			if flag:
				if c > 0:
					out.write("Adding to checks: check[%d] %s\n" % (c, regex))
				else:
					out.write("Adding to checks: check %s\n" % regex)
			else:
				out.write("Adding to checks: !check %s\n" % regex)
		self.checks.append((re.compile(regex), flag, c, regex))
		if not hasattr(self.environment, 'asm_file'):
			self.environment.asm_file = self.environment.builddir + "/" + self.environment.filename + ".s"

	def _add_shell_cmd(self, cmd):
		"""execute the given command."""
		if _DEBUG:
			out.write("Adding to shell commands: '%s'\n" % cmd)
		self.shell_cmds.append(cmd)
		if not hasattr(self.environment, 'asm_file'):
			self.environment.asm_file = self.environment.builddir + "/" + self.environment.filename + ".s"

	def _add_cflags(self, flags):
		"""Add to cflags"""
		if _DEBUG:
			out.write("Adding to cflags: '%s'\n" % flags)
		self.environment.cflags += " " + flags

	def _add_ldflags(self, flags):
		"""Add to ldflags"""
		if _DEBUG:
			out.write("Adding to ldflags: '%s'\n" % flags)
		self.environment.ldflags += " " + flags

	def _parse_embedded_command(self, cmd):
		"""parse one /*$ $*/ embedded command"""
		m = _CMD.match(cmd)
		if m:
			base = m.group(1)
			if m.group(2):
				base = base[0:-len(m.group(2))]
			if base == "check":
				self._add_check(m.group(3).strip(), m.group(2), True)
			elif base == "!check":
				self._add_check(m.group(3).strip(), m.group(2), False)
			elif base == "shell":
				self._add_shell_cmd(m.group(3).strip())
			elif base == "cflags":
				self._add_cflags(m.group(3).strip())
			elif base == "ldflags":
				self._add_ldflags(m.group(3).strip())
			else:
				out.write("Error: unsupported command %s\n" % (base))
		else:
			# threat as an cflag option
			self._add_cflags(cmd.strip())

	def _parse_embedded_commands(self, filename):
		"""check input for /*$ $*/ embedded command and parse them."""
		for line in open(filename):
			m = _EMBEDDED_CMD.match(line)
			if m:
				if _DEBUG:
					out.write("Processing embedded cmd: %s\n" % (m.group(1)))
				self._parse_embedded_command(m.group(1))

	def _prepare(self):
		environment = self.environment
		if hasattr(environment, "asm_file"):
			ensure_dir(os.path.dirname(environment.asm_file))
		ensure_dir(os.path.dirname(environment.executable))
	def run(self):
		self.success = False
		self.error_msg = "ok"
		self._prepare()
		c = self._test_compile()
		if not c: return
		c = self.check_compiler_errors()
		if not c: return
		c = self._test_reference_output()
		if not c: return
		c = self._test_shell_commands()
		if not c: return
		c = self._test_check_commands()
		if not c: return
		self.clean()
		self.success = True
	def _test_compile(self):
		"""Compile the test program"""
		start = time()
		c = self.compile()
		self.compile_seconds = time() - start
		self.long_error_msg = "\n".join((self.compile_command, self.compiling))
		if not c: return c
		return True
	def _test_reference_output(self):
		"""Run test program and compare output to reference"""
		environment = self.environment
		start = time()
		r = self.check_execution()
		self.run_seconds = time() - start
		return r

	def _test_check_commands(self):
		"""Execute all embedded check commands"""
		if len(self.checks) == 0:
			return True

		self._compile_asm()
		asm_name = "%(asm_file)s" % self.environment.__dict__
		for regex, flag, c, txt in self.checks:
			if _DEBUG:
				prefix = "checking !"
				if flag: prefix = "checking"
				if c > 0: prefix += " %d *" % c
				out.write("%s '%s'\n" % (prefix, txt))
			s = self._grep_asm(asm_name, regex, c)
			if flag != s:
				prefix = "!check"
				if flag: prefix = "check"
				if c > 0: prefix += "[%d]" % c
				self.error_msg = "%s '%s' failed" % (prefix, txt)
				return False
		return True

	def _test_shell_commands(self):
		"""Execute all embedded shell commands"""
		if len(self.shell_cmds) == 0:
			return True

		self._compile_asm()
		for txt in self.shell_cmds:
			cmd = txt % self.environment.__dict__
			if _DEBUG:
				out.write("shell %s\n" % (txt))
			ret = silent_shell(cmd)
			if ret != 0:
				self.error_msg = "shell '%s' failed" % cmd
				return False
		return True

	def _grep_asm(self, asm_name, regex, count):
		"""Check for regex in the generated assembler file."""
		if count > 0:
			for line in open(asm_name):
				if regex.search(line):
					count -= 1
			return count == 0
		else:
			for line in open(asm_name):
				if regex.search(line):
					return True
		return False

	def clean(self):
		"""Remove intermediate files"""
		environment = self.environment
		if os.path.isfile(environment.executable):
			os.unlink(environment.executable)
		if hasattr(environment, 'asm_file') and os.path.isfile(environment.asm_file):
			os.unlink(environment.asm_file)
	def compile(self):
		"""Compile the test program"""
		environment = self.environment
		cmd = "%(compiler)s %(filename)s %(cflags)s %(ldflags)s -o %(executable)s" % environment.__dict__
		self.compile_command = cmd
		self.compiling = ""
		try:
			self.compile_out, self.compile_err, self.compile_retcode = my_execute(cmd, timeout=60)
		except SigKill, e:
			self.error_msg = "compiler: %s" % (e.name)
			self.long_error_msg = "\n".join((self.compile_command, self.compiling))
			return False
		except OSError, e:
			self.error_msg = "compilation failed (%s)" % (e.strerror)
			self.long_error_msg = "\n".join((self.compile_command, self.compiling))
			return False
		c = self.parse_compiler_output()
		if not c: return c

		return True

	def parse_compiler_output(self):
		# Compiled. Now check the compiler output.
		self.warnings = []
		self.errors = []
		self.compiling = "\n".join(self.compile_out)
		for line in self.compile_err.splitlines() + self.compile_out.splitlines():
			if ": warning: " in line: # frontend warnings
				self.warnings.append(line)
			elif " error: " in line: # frontend errors
				self.errors.append(line)
			elif line.startswith("Verify warning:"): # libfirm verifier warnings
				self.error_msg = "verify warning"
				if not hasattr(self, 'long_error_msg'):
					self.long_error_msg = ""
				self.long_error_msg += line+"\n"
				return False
			elif "libFirm panic" in line:
				self.errors_msg = "libFirm panic"
				return False
			elif "linker reported an error" in line:
				self.error_msg = "linker error"
				return False
			elif "assembler reported an error" in line:
				self.error_msg = "assembler error"
				return False
		return True
	def check_compiler_errors(self):
		if len(self.errors) > 0:
			self.error_msg = "%d compile errors" % len(self.errors)
			return False
		if self.compile_retcode != 0:
			self.error_msg = "compilation not ok (returncode %d)" % self.compile_retcode
			return False
		return True
	def _compile_asm(self):
		"""Compile the test program to assembler"""
		environment = self.environment
		cmd = "%(compiler)s -S %(filename)s %(cflags)s %(ldflags)s -o %(asm_file)s" % environment.__dict__
		silent_shell(cmd) # assumed to succeed, because compile to exe did
	def check_execution(self):
		"""Run compiled test program and compare output to reference"""
		environment = self.environment
		try:
			out, err, retcode = my_execute(environment.runexe + environment.executable, timeout=30)
			if retcode != 0:
				self.error_msg = "Test return code not zero but %d" % retcode
				return False
		except SigKill, e:
			self.error_msg = "execution: %s" % (e.name)
			return False
		except OSError, e:
			self.error_msg = "OSError on execution"
			return False

		# Program run succeeded. Now compare output with reference.
		if not hasattr(environment, 'reference_output'):
			self.error_msg = "no reference output"
			if out:
				out = "Output was:\n"+out
			else:
				out = "Empty Output."
			self.long_error_msg = "Add .ref file for this test case! "+out
			return False
		ref = environment.reference_output.splitlines()
		diff = "\n".join(difflib.unified_diff(out.splitlines(), ref))
		if diff == "":
			return True
		else:
			self.error_msg = "output mismatch"
			self.long_error_msg = diff
			return False

class TestShouldFail(Test):
	def __init__(self, filename, environment):
		Test.__init__(self, filename, environment)

	def check_compiler_errors(self):
		if len(self.errors) == 0:
			self.error_msg = "compiler missed error"
			return False
		return True
	def check_execution(self):
		return True # nothing to execute

class TestShouldWarn(Test):
	def __init__(self, filename, environment):
		environment = deepcopy(environment)
		environment.cflags += " -Wall -W"
		Test.__init__(self, filename, environment)

	def check_compiler_errors(self):
		if len(self.warnings) == 0:
			self.error_msg = "compiler missed warnings"
			return False
		return Test.check_compiler_errors(self)
	def check_execution(self):
		return True # only check compilation

class TestShouldNotWarn(Test):
	def __init__(self, filename, environment):
		Test.__init__(self, filename, environment)

	def check_compiler_errors(self):
		if len(self.warnings) > 0:
			self.error_msg = "compiler produced invalid warning"
			return False
		return Test.check_compiler_errors(self)
	def check_execution(self):
		return True # only check compilation

class TestJava(Test):
	def __init__(self, filename, environment):
		Test.__init__(self, filename, environment)
	def _init_flags(self):
		Test._init_flags(self)
		environment = self.environment
		if not hasattr(environment, "bytecodec"):
			environment.bytecodec = "bytecode2firm"
			environment.bytecodecflags = ""
		environment.bytecodecflags += "-cp %s" % os.path.dirname(environment.filename)
		environment.mainclass = os.path.basename(environment.filename[:-6])
	def compile(self):
		environment = self.environment
		cmd = "%(bytecodec)s %(bytecodecflags)s %(mainclass)s -o %(executable)s" % environment.__dict__
		self.compile_command = cmd
		self.compiling = ""
		out.write(cmd + "\n")
		try:
			self.compile_out, self.compile_err, self.compile_retcode = my_execute(cmd, timeout=30)
		except SigKill, e:
			self.error_msg = "compiler %s (SIG %d)" % (e.name, -e.retcode)
			return False
		return True
	def check_compiler_errors(self):
		if self.compile_retcode != 0:
			self.error_msg = "compilation not ok (returncode %d)" % self.compile_retcode
			return False
		return True
	def _compile_asm(self):
		self.error_msg = "bytecode->asm not implemented yet"
		return False

def load_expectations(url):
	input = urlopen(url)
	if input.getcode() != None and input.getcode() != 200:
		raise Exception("Couldn't download from '%s'" % url)
	for line in input:
		try:
			i = line.index(" ")
		except ValueError:
			continue
		test_id = line[:i]
		error_msg = line[i:].strip()
		yield test_id, error_msg
_EXPECTATIONS = {}

def expectation_match(error, expectation):
	if error.endswith(" compile errors") and expectation.endswith(" compile errors"):
		# exact number of compile errors does not matter
		return True
	if error == "compiler: SIGXCPU" and expectation == "compiler: SIGKILL":
		# BSD on timeout signals SIGXCPU and Linux SIGKILL
		return True
	return error == expectation

_CONSOLE_RED = "\033[1;31m"
_CONSOLE_GREEN = "\033[1;32m"
_CONSOLE_YELLOW = "\033[1;33m"
_CONSOLE_BOLD = "\033[1m"
_CONSOLE_NORMAL = "\033[m"
_RC = 0 # application return code

def console_output(test, compile_times):
	timing = ""
	prefix = ""
	if compile_times:
		timing = " [%s%.2fs%s]" % (_CONSOLE_YELLOW, test.compile_seconds, _CONSOLE_NORMAL)
	error_msg = test.error_msg
	expected  = _EXPECTATIONS.get(test.id)
	if expected and expectation_match(error_msg, expected):
		if test.success and not _VERBOSE:
			return
	else:
		if test.success:
			prefix = _CONSOLE_GREEN
		elif expected and expected != "ok":
			prefix = _CONSOLE_YELLOW
		else:
			prefix = _CONSOLE_RED

		if expected and not test.success:
			global _RC
			_RC = 1

		if expected:
			error_msg += " (expected %s)" % expected
		else:
			error_msg += " (new)"
	out.write("%s%-40s %s%s%s\n" % (prefix, test.id, error_msg, _CONSOLE_NORMAL, timing))
	out.flush()

class Report:
	def __init__(self):
		self.xml = ET.Element("results")
		self.tests = list()
		self.summary = (0,0)
	def addTest(self, test):
		self.tests.append(test)
	def printSummary(self):
		out.write("---------------------------\n")
		out.write("Ran %d tests, of which %s%d failed%s.\n" %\
			(self.summary[0], _CONSOLE_BOLD, self.summary[1], _CONSOLE_NORMAL))
		out.flush()
	def writeXML(self, fh, config):
		xml = ET.Element("results")
		ET.SubElement(xml, "datetime").text = str(datetime.now())
		ET.SubElement(xml, "reportname").text = _REPORT_NAME
		env = ET.SubElement(xml, "environment")
		for (key,value) in config.__dict__.iteritems():
			ET.SubElement(env, key).text = str(value)
		env.tail = "\n" # pretty print
		for test in self.tests:
			self._addTestXML(xml, test)
		summary = ET.SubElement(xml, "summary")
		ET.SubElement(summary, "total").text = str(self.summary[0])
		ET.SubElement(summary, "failed").text = str(self.summary[1])
		tree = ET.ElementTree(xml)
		tree.write(fh)
	def writeFaillog(self, fh, config):
		for test in self.tests:
			fh.write("%-40s %s\n" % (test.id, test.error_msg))
	def _addTestXML(self, xml, test):
		fail = not test.success
		result = ET.SubElement(xml, "result")
		result.set("id", test.id)
		result.set("ok", str(int(test.success)))
		result.set("error", test.error_msg)
		result.set("run_seconds", "%.2f" % (test.run_seconds))
		result.set("compile_seconds", "%.2f" % (test.compile_seconds))
		if _DEBUG:
			result.set("compile_command", test.compile_command)
		if not test.success and hasattr(test, 'long_error_msg'):
			result.text = test.long_error_msg
		result.tail = "\n" # pretty print
		self.summary = (self.summary[0]+1, self.summary[1]+int(fail))

def _do_test(test):
	def f():
		test.run()
		return test
	return f

test_factories = [
	( lambda name: "bytecode2firm/" in name, TestJava ),
]

def make_test(environment, filename):
	testclass = Test
	environment = deepcopy(environment)
	if filename.startswith("C/gnu99"):
		environment.cflags += " -std=gnu99"
	elif filename.startswith("C/MS"):
		environment.cflags += " --ms"
	elif filename.startswith("C/"):
		environment.cflags += " -std=c99"

	if "/should_fail/" in filename:
		testclass = TestShouldFail
	elif "/should_warn/" in filename:
		testclass = TestShouldWarn
	elif "/nowarn/" in filename:
		testclass = TestShouldNotWarn
		environment.cflags += " -Wall -W"
	else:
		for (test,cls) in test_factories:
			if test(filename):
				testclass = cls
				break

	return testclass(filename, environment)

_EXTENSIONS = ["c", "cc", "java"]
def find_files(directory):
	for ext in _EXTENSIONS:
		for name in glob("%s/*.%s" % (directory, ext)):
			yield name

def makereport(config, tests):
	init(config)
	queue = list()
	if not tests:
		tests = _DEFAULT_DIRS + _ARCH_DIRS

	global _EXPECTATIONS
	try:
		_EXPECTATIONS = dict(load_expectations(config.expect_url))
	except Exception as e:
		out.write("Couldn't load fail epxectations: %s\n" % e)
		_EXPECTATIONS = {}

	# create test futures for parallel evaluation
	for test in tests:
		if os.path.isdir(test):
			for fname in sorted(find_files(test)):
				t = make_test(config, fname)
				queue.append(future(_do_test(t)))
		else:
			t = make_test(config, test)
			queue.append(future(_do_test(t)))
	# start actual work
	add_worker(config.threads)
	# collect report
	r = Report()
	try:
		found = {}
		for promise in queue:
			test = promise.force()
			found[test.id] = True
			console_output(test, options.compile_times)
			r.addTest(test)
		if config.show_disappeared:
			for t in _EXPECTATIONS:
				if t not in found:
					out.write("%s%-40s %s%s\n" % (_CONSOLE_RED, t, "test disappeared", _CONSOLE_NORMAL))
					out.flush()

	except KeyboardInterrupt:
		pass
	r.writeXML(open(config.reportdir + "/" + _REPORT_NAME + ".xml", 'w'), config)
	faillog_out = config.faillog_out
	if faillog_out == None:
		faillog_out = config.reportdir + "/" + _REPORT_NAME + ".faillog"
	r.writeFaillog(open(faillog_out, 'w'), config)
	r.printSummary()

def init(config):
	ensure_dir(config.reportdir)
	ensure_dir(config.builddir)

def main():
	global _RC
	global options
	global _VERBOSE
	global _DEBUG
	os.putenv("LANG", "C") # need english error messages in gcc ;)
	# Look for plugins
	pluginlist = list(glob("*/reportplugin.py"))
	pluginlist += list(glob("configs/*.py"))
	for plugin in pluginlist:
		execfile(plugin)

	# Add new commandline options for all configurations
	for (config,setupfunc) in configurations.iteritems():
		_OPTS.add_option("--%s" % config, action="callback", callback=setupfunc,
		                 help="activate %s configuration" % config)

	options, args = _OPTS.parse_args()
	_DEBUG         = options.debug
	_VERBOSE       = options.verbose
	makereport(options, args)
	return _RC

if __name__ == "__main__":
	sys.exit(main())
