import subprocess

def try_opt (ir):
	try:
		global _DEBUG
		if _DEBUG:
			return subprocess.check_output (args = ['./test_optimization.py', '-d', ir])
		else:
			return subprocess.check_output (args = ['./test_optimization.py', ir])
	except subprocess.CalledProcessError as e:
		print ('Testing ' + ir + ' yielded an error.')
		print (e)
	except Exception as f:
		print (f)

class Optitest(Test):
	def __init__(self, filename, environment):
		Test.__init__(self, filename, environment)

	def compile(self):
		os.chdir("optitest")
		self.output = try_opt(self.id[9:])
		os.chdir("..")

		self.compile_command = "optitest"
		self.compiling = ""
		self.errors = []
		self.compile_retcode = 0

		if (self.output):
			return True
		else:
			self.error_msg = "Test failed"
			return False

	def _test_reference_output(self):
		if (self.output):
			return self.check_reference_output(self.output)

def setup_optitest(option, opt_str, value, parser):
	global _DEFAULT_DIRS
	_DEFAULT_DIRS = [ ]

	global _ARCH_DIRS
	_ARCH_DIRS = [ "optitest" ]

	global _EXTENSIONS
	_EXTENSIONS = [ "ir" ]

	test_factories.append((lambda name: name.endswith(".ir"), Optitest))

	parser.values.expect_url = "fail_expectations_optitest"

configurations['optitest'] = setup_optitest
