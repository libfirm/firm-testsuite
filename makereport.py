#!/usr/bin/env python
"""
Makereport (ported from makereport.sh)
"""

from glob import iglob as glob
from threading import Thread
import os
import time
import xml.etree.ElementTree as ET
import difflib
import optparse
from datetime import datetime
from time import time

from futures import future, add_worker
from shell import silent_shell, execute, SigKill

BASE_DIR = os.path.abspath(os.curdir)

_DEFAULT_DIRS = "backend x86code opt C C/pragmatic C/should_fail C/gnu99 ack langshootout llvm".split(" ")
_DEBUG = None
_VERBOSE = None
_COMPILE_TIMES = None
_REPORT_NAME = "stats-" +  datetime.now().strftime("%Y.%m.%d")
_EXPECT_FILE = os.path.abspath("fail_expectations")

def load_expectations():
	for line in open(_EXPECT_FILE):
		try:
			i = line.index(" ")
		except ValueError:
			continue
		test_id = line[:i]
		error_msg = line[i:].strip()
		yield test_id, error_msg
_EXPECTATIONS = dict(load_expectations())

_OPTS = optparse.OptionParser(version="%prog 0.1", usage="%prog [options]")
_OPTS.set_defaults(debug=False, verbose=False, threads=3, compiler="cparser")
_OPTS.add_option("-d", "--debug", dest="debug", action="store_true",
				help="Enable debug messages")
_OPTS.add_option("-v", "--verbose", dest="verbose", action="store_true",
				help="More output")
_OPTS.add_option("-c", "--compile-times", dest="compile_times", action="store_true",
				help="Display compile time of each program")
_OPTS.add_option("-t", "--threads", dest="threads",
				help="Number of threads to use")
_OPTS.add_option("", "--cflags", dest="cflags", default="",
				help="Use CFLAGS to compile test programs", metavar="CFLAGS")
_OPTS.add_option("", "--ldflags", dest="ldflags", default="",
				help="Use LDFLAGS to compile test programs", metavar="LDFLAGS")
_OPTS.add_option("", "--compiler", dest="compiler",
				help="Use COMPILER to compile test programs", metavar="COMPILER")

def file2id(filename):
	assert filename.endswith(".c")
	filename = filename[:-2]
	filename = filename.replace("/", "_")
	return filename

_MANDATORY_CFLAGS = "-v -ffp-strict -std=c99 "
_MANDATORY_LDFLAGS = "-lm "
class Test:
	def __init__(self, filename, compiler, cflags, ldflags):
		self.compiler = compiler
		self.cflags = _MANDATORY_CFLAGS + cflags
		self.ldflags = _MANDATORY_LDFLAGS + ldflags
		self.compile_seconds = -1
		self.run_seconds = -1
		assert filename.endswith(".c")
		self.filename = filename
		self.name = filename
		if self.name.startswith(BASE_DIR):
				self.name = self.name[len(BASE_DIR)+1:]
		self.cflags += "-I%s " % os.path.dirname(self.name)
		if not "-O" in self.cflags:
			self.cflags += "-O3 "
		self.id = file2id(self.name)
		if os.path.isfile(filename+".ref"):
			self.reference_output = open(filename+".ref").read()
		if os.path.isfile(filename+".check"):
			self.check_script_filename = filename+".check"
			self.asm_file = filename+".s"
		self.should_fail = False
		if "should_fail" in filename:
		 	self.should_fail = True
		self.should_warn = False
		if "should_warn" in filename:
		 	self.should_warn = True
		self.executable = filename+".exe"
	def run(self):
		self.success = False
		self.error_msg = ""
		c = self.compile()
		self.long_error_msg = "\n".join((self.compile_command, self.compiling))
		if not c:
			return
		if hasattr(self, 'reference_output'):
			start = time()
			r = self.check_reference()
			self.run_seconds = time() - start
			if not r:
				return
		self.long_error_msg = ""
		if hasattr(self, 'check_script_filename'):
			s = self.check_script()
			if not s:
				self.error_msg = "check script failed"
				return
		self.clean()
		self.success = True
	def clean(self):
		if self.should_fail:
			return # nothing to do
		if not os.path.isfile(self.executable):
			print "executable vanished?", self.id
		else:
			os.unlink(self.executable)
		if hasattr(self, 'check_script_filename'):
			if not os.path.isfile(self.asm_file):
				print "asm file vanished?", self.id
			else:
				os.unlink(self.asm_file)
	def compile(self):
		"""Compile the test program"""
		cmd = "%s %s %s %s -o %s" %\
					 (self.compiler, self.filename, self.cflags, self.ldflags, self.executable)
		self.compile_command = cmd
		self.compiling = ""
		start = time()
		try:
			output = list(execute(cmd, timeout=30))
		except SigKill, e:
			self.compile_seconds = time() - start
			self.error_msg = "compiler %s (SIG %d)" % (e.name, -e.retcode)
			return False
		self.compile_seconds = time() - start
		warnings = 0
		errors = 0
		self.compiling = "\n".join(output)
		for line in output:
			if " warning: " in line:
				warnings += 1
			if " error: " in line:
				errors += 1
			if "libFirm panic" in line:
				self.error_msg = "libFirm panic"
				return False
			elif "linker reported an error" in line:
				self.error_msg = "linker error"
				return False
		if errors > 0 and not self.should_fail:
			self.error_msg = "%d compile errors" % errors
			return False
		elif errors == 0 and self.should_fail:
			self.error_msg = "no errors"
			return False
		elif warnings == 0 and self.should_warn:
			self.error_msg = "%d compile warnings" % warnings
			return False
		return True
	def _compile_asm(self):
		"""Compile the test program to assembler"""
		cmd = "%s -S %s %s %s -o %s" %\
					 (self.compiler, self.filename, self.cflags, self.ldflags, self.asm_file)
		silent_shell(cmd) # assumed to succeed, because compile to exe did
	def check_reference(self):
		"""Run compiled test program and compare output to reference"""
		try:
			output = list(execute(self.executable, timeout=30))
		except SigKill, e:
			self.error_msg = "execution %s (SIG %d)" % (e.name, -e.retcode)
			return False
		except OSError, e:
			self.error_msg = "OSError on execution"
			return False
		ref = self.reference_output.splitlines()
		diff = "\n".join(difflib.unified_diff(output, ref))
		if diff == "":
			return True
		else:
			self.error_msg = "output mismatch"
			self.long_error_msg = diff
			return False
	def check_script(self):
		"""Execute the check script"""
		self._compile_asm()
		cmd = "%s %s" % (self.check_script_filename, self.asm_file)
		ret = silent_shell(cmd)
		return ret == 0

def _get_test_files(dir):
	for tdir in _DEFAULT_DIRS:
		for fname in glob("%s/%s/*.c" % (dir, tdir)):
			yield fname

_CONSOLE_RED = "\033[1;31m"
_CONSOLE_NORMAL = "\033[0m"
def console_output(test):
	timing = ""
	if _COMPILE_TIMES:
		timing = " (%.2fsec)" % (test.compile_seconds)
	if test.success:
		if _VERBOSE:
			print "%-37s%s" % (test.id, timing)
	else:
		prefix = _CONSOLE_RED
		if test.id in _EXPECTATIONS and test.error_msg == _EXPECTATIONS[test.id]:
			prefix = ""
		print "%s%-35s %s%s%s" % (prefix, test.id, test.error_msg, _CONSOLE_NORMAL, timing)

class Report:
	def __init__(self):
		self.xml = ET.Element("results")
		self.tests = list()
		self.summary = (0,0)
	def addTest(self, test):
		self.tests.append(test)
	def printSummary(self):
		print "-"*40
		print "Ran %d tests, of which %d failed." % self.summary
	def writeXML(self, fh):
		xml = ET.Element("results")
		ET.SubElement(xml, "datetime").text = str(datetime.now())
		ET.SubElement(xml, "reportname").text = _REPORT_NAME
		env = ET.SubElement(xml, "environment")
		example = self.tests[0]
		ET.SubElement(env, "TEST_COMPILER").text = example.compiler
		ET.SubElement(env, "TEST_CFLAGS").text = example.cflags
		ET.SubElement(env, "TEST_LDFLAGS").text = example.ldflags
		env.tail = "\n" # pretty print
		for test in self.tests:
			self._addTestXML(xml, test)
		summary = ET.SubElement(xml, "summary")
		ET.SubElement(summary, "total").text = str(self.summary[0])
		ET.SubElement(summary, "failed").text = str(self.summary[1])
		tree = ET.ElementTree(xml)
		tree.write(fh)
	def _addTestXML(self, xml, test):
		fail = not test.success
		result = ET.SubElement(xml, "result")
		result.set("id", test.id)
		result.set("name", test.filename)
		result.set("ok", str(int(test.success)))
		result.set("error", test.error_msg)
		result.set("run_seconds", "%.2f" % (test.run_seconds))
		result.set("compile_seconds", "%.2f" % (test.compile_seconds))
		if not test.success and hasattr(test, 'long_error_msg'):
			result.text = test.long_error_msg
		result.tail = "\n" # pretty print
		self.summary = (self.summary[0]+1, self.summary[1]+int(fail))

def _do_test(t):
	def func():
		t.run()
		return t
	return func

def _create_test(fname, config):
	return Test(fname,
			compiler=config.compiler,
			cflags=config.cflags,
			ldflags=config.ldflags)

def makereport(config, tests):
	queue = list()
	if not tests:
		tests = _get_test_files(BASE_DIR)
	for fname in tests:
		t = _create_test(fname, config)
		queue.append(future(_do_test(t)))
	add_worker(config.threads)
	r = Report()
	try:
		for promise in queue:
			test = promise.force()
			console_output(test)
			r.addTest(test)
	except KeyboardInterrupt:
		pass
	r.writeXML(open("reports/"+_REPORT_NAME+".xml", 'w'))
	r.printSummary()

if __name__ == "__main__":
	options, args = _OPTS.parse_args()
	_DEBUG         = options.debug
	_VERBOSE       = options.verbose
	_COMPILE_TIMES = options.compile_times
	makereport(options, args)
