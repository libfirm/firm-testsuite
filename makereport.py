#!/usr/bin/env python
"""
Makereport (ported from makereport.sh)
"""

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

from futures import future, add_worker
from shell import silent_shell, execute, SigKill
from copy import deepcopy

_DEFAULT_DIRS = [
	"backend",
	"opt",
	"C",
	"C/pragmatic",
	"C/should_fail",
	"C/should_warn",
	"C/nowarn",
	"C/gnu99",
	"ack",
	"langshootout",
	"llvm" ]
_ARCH_DIRS = [
	"x86code" ]
_DEBUG = None
_VERBOSE = None
_REPORT_NAME = "stats-" +  datetime.now().strftime("%Y.%m.%d")
_CFLAG_COMMENT = re.compile("/\\*\\$ (.+) \\$\\*/")

def setup_sparc(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = []
	config = parser.values
	config.cflags += " -mtarget=sparc-linux-gnu"
	config.ldflags += " -static"
	config.runexe += "qemu-sparc32plus "
	config.expect_file = "fail_expectations_sparc"

def setup_arm(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = [ "armcode" ]
	config = parser.values
	config.cflags += " -mtarget=arm-linux-gnu"
	config.ldflags += " -static"
	config.runexe += "qemu-arm "
	config.expect_file = "fail_expectations_arm"

_OPTS = optparse.OptionParser(version="%prog 0.1", usage="%prog [options]")
_OPTS.set_defaults(
	debug=False,
	verbose=False,
	threads=multiprocessing.cpu_count() + 1,
	compiler="cparser",
	reportdir="reports/",
	builddir="build/",
	cflags="-march=native -O3",
	ldflags="-lm",
	expect_file="fail_expectations",
	runexe="")
_OPTS.add_option("-d", "--debug", dest="debug", action="store_true",
				help="Enable debug messages")
_OPTS.add_option("-v", "--verbose", dest="verbose", action="store_true",
				help="More output")
_OPTS.add_option("-c", "--compile-times", dest="compile_times", action="store_true",
				help="Display compile time of each program")
_OPTS.add_option("-t", "--threads", dest="threads", type="int",
				help="Number of threads to use")
_OPTS.add_option("", "--cflags", dest="cflags",
				help="Use CFLAGS to compile test programs", metavar="CFLAGS")
_OPTS.add_option("", "--ldflags", dest="ldflags",
				help="Use LDFLAGS to compile test programs", metavar="LDFLAGS")
_OPTS.add_option("", "--compiler", dest="compiler",
				help="Use COMPILER to compile test programs", metavar="COMPILER")
_OPTS.add_option("", "--sparc", action="callback", callback=setup_sparc)
_OPTS.add_option("", "--arm", action="callback", callback=setup_arm)

def ensure_dir(name):
	try:
		os.mkdir(name)
	except Exception:
		pass
	if not os.path.isdir(name):
		sys.stderr.write("Error: '%s' is not a directory\n" % name)
		sys.exit(1)

class Test:
	def __init__(self, filename, environment):
		environment = deepcopy(environment)
		self.environment = environment
		self.id = filename
		self.compile_seconds = -1
		self.run_seconds = -1

		environment.filename = filename
		if os.path.isfile(filename+".ref"):
			environment.reference_output = open(filename+".ref").read()
		if os.path.isfile(filename+".check"):
			environment.check_script_filename = filename+".check"
			environment.asm_file = environment.builddir + "/" + environment.filename + ".s"
		environment.executable = environment.builddir + "/" + environment.filename + ".exe"
		self._init_flags()
	def _init_flags(self):
		environment = self.environment
		environment.cflags += " -I%s " % os.path.dirname(environment.filename)
		if not "-O" in environment.cflags:
			environment.cflags += " -O3 "
		if not "-march" in environment.cflags:
			environment.cflags += " -march=native "
		# insert additional cflags within the test case source
		for line in open(environment.filename):
			m = _CFLAG_COMMENT.match(line)
			if m:
				environment.cflags += m.group(1)
	def _prepare(self):
		environment = self.environment
		if hasattr(environment, "asm_file"):
			ensure_dir(os.path.dirname(environment.asm_file))
		ensure_dir(os.path.dirname(environment.executable))
	def run(self):
		self.success = False
		self.error_msg = ""
		self._prepare()
		c = self._test_compile()
		if not c: return
		c = self.check_compiler_errors()
		if not c: return
		c = self._test_reference_output()
		if not c: return
		c = self._test_check_script()
		if not c: return
		self.clean()
		self.success = True
	def _test_compile(self):
		"""Compile the test program"""
		start = time()
		c = self.compile()
		self.compile_seconds = time() - start
		if not c: return c
		self.long_error_msg = "\n".join((self.compile_command, self.compiling))
		return True
	def _test_reference_output(self):
		"""Run test program and compare output to reference"""
		environment = self.environment
		if hasattr(environment, 'reference_output'):
			start = time()
			r = self.check_reference()
			self.run_seconds = time() - start
			return r
		return True
	def _test_check_script(self):
		"""Execute check script"""
		self.long_error_msg = ""
		if hasattr(self, 'check_script_filename'):
			s = self.check_script()
			if not s:
				self.error_msg = "check script failed"
			return s
		return True
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
			self.compile_out, self.compile_err, self.compile_retcode = execute(cmd, timeout=30)
		except SigKill, e:
			self.error_msg = "compiler %s (SIG %d)" % (e.name, -e.retcode)
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
	def check_reference(self):
		"""Run compiled test program and compare output to reference"""
		environment = self.environment
		try:
			out, err, retcode = execute(environment.executable, timeout=30)
			if retcode != 0:
				self.error_msg = "Test return code not zero but %d" % retcode
				return False
		except SigKill, e:
			self.error_msg = "execution %s (SIG %d)" % (e.name, -e.retcode)
			return False
		except OSError, e:
			self.error_msg = "OSError on execution"
			return False

		# Program run succeeded. Now compare output with reference.
		ref = environment.reference_output.splitlines()
		diff = "\n".join(difflib.unified_diff(out.splitlines(), ref))
		if diff == "":
			return True
		else:
			self.error_msg = "output mismatch"
			self.long_error_msg = diff
			return False
	def check_script(self):
		"""Execute the check script"""
		self._compile_asm()
		environment = self.environment
		cmd = "%(check_script_filename)s %(asm_file)s" % environment.__dict__
		ret = silent_shell(cmd)
		return ret == 0

class TestShouldFail(Test):
	def __init__(self, filename, environment):
		Test.__init__(self, filename, environment)

	def check_compiler_errors(self):
		if len(self.errors) == 0:
			self.error_msg = "compiler missed error"
			return False
		return True

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

class TestShouldNotWarn(Test):
	def __init__(self, filename, environment):
		Test.__init__(self, filename, environment)

	def check_compiler_errors(self):
		if len(self.warnings) > 0:
			self.error_msg = "compiler produced invalid warning"
			return False
		return Test.check_compiler_errors(self)

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
		print cmd
		try:
			self.compile_out, self.compile_err, self.compile_retcode = execute(cmd, timeout=30)
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

def load_expectations(filename):
	for line in open(filename):
		try:
			i = line.index(" ")
		except ValueError:
			continue
		test_id = line[:i]
		error_msg = line[i:].strip()
		yield test_id, error_msg
_EXPECTATIONS = {}

_CONSOLE_RED = "\033[1;31m"
_CONSOLE_GREEN = "\033[1;32m"
_CONSOLE_YELLOW = "\033[0;33m"
_CONSOLE_BOLD = "\033[1m"
_CONSOLE_NORMAL = "\033[m"
def console_output(test, compile_times):
	timing = ""
	prefix = ""
	if compile_times:
		timing = " [%s%.2fs%s]" % (_CONSOLE_YELLOW, test.compile_seconds, _CONSOLE_NORMAL)
	if test.success:
		if test.id in _EXPECTATIONS:
			prefix = _CONSOLE_GREEN
		elif not _VERBOSE:
			return
	elif not test.id in _EXPECTATIONS or test.error_msg != _EXPECTATIONS[test.id]:
		prefix = _CONSOLE_RED
	print "%s%-35s %s%s%s" % (prefix, test.id, test.error_msg, _CONSOLE_NORMAL, timing)

class Report:
	def __init__(self):
		self.xml = ET.Element("results")
		self.tests = list()
		self.summary = (0,0)
	def addTest(self, test):
		self.tests.append(test)
	def printSummary(self):
		print "---------------------------"
		print "Ran %d tests, of which %s%d failed%s." %\
			(self.summary[0], _CONSOLE_BOLD, self.summary[1], _CONSOLE_NORMAL)
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
			if test.success: continue
			fh.write("%-35s %s\n" % (test.id, test.error_msg))
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

def make_test(environment, filename):
	testclass = Test
	environment = deepcopy(environment)
	if filename.startswith("C/gnu99"):
		environment.cflags += " -std=gnu99"
	elif filename.startswith("C/MS"):
		environment.cflags += " --ms"
	elif filename.startswith("C/"):
		environment.cflags += " -std=c99"

	if "C/should_fail/" in filename:
		testclass = TestShouldFail
	elif "C/should_warn/" in filename:
		testclass = TestShouldWarn
	elif "C/nowarn/" in filename:
		testclass = TestShouldNotWarn
	elif "bytecode2firm/" in filename:
		testclass = TestJava

	return testclass(filename, environment)

def makereport(config, tests):
	init(config)
	queue = list()
	if not tests:
		tests = _DEFAULT_DIRS + _ARCH_DIRS

	if os.path.exists(config.expect_file):
		global _EXPECTATIONS
		_EXPECTATIONS = dict(load_expectations(config.expect_file))
	# create test futures for parallel evaluation
	for test in tests:
		if os.path.isdir(test):
			for fname in glob("%s/*.c" % test):
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
		for promise in queue:
			test = promise.force()
			console_output(test, options.compile_times)
			r.addTest(test)
	except KeyboardInterrupt:
		pass
	r.writeXML(open(config.reportdir + "/" + _REPORT_NAME + ".xml", 'w'), config)
	r.writeFaillog(open(config.reportdir + "/" + _REPORT_NAME + ".faillog", 'w'), config)
	r.printSummary()

def init(config):
	ensure_dir(config.reportdir)
	ensure_dir(config.builddir)

if __name__ == "__main__":
	options, args = _OPTS.parse_args()
	_DEBUG         = options.debug
	_VERBOSE       = options.verbose
	makereport(options, args)
