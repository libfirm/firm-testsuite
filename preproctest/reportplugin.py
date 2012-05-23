class TestPreprocessor(Test):
	def __init__(self, filename, environment):
		Test.__init__(self, filename, environment)
		environment = self.environment
		environment.preprocessed = environment.builddir + "/" + environment.filename + ".i"
		if not hasattr(environment, "ppflags"):
			environment.ppflags = "-I ."

	def _init_flags(self):
		Test._init_flags(self)
		environment = self.environment

	def compile(self):
		environment = self.environment
		ensure_dir(os.path.dirname(environment.preprocessed))

		cmd = "%(compiler)s -E %(ppflags)s %(filename)s -o %(preprocessed)s" % environment.__dict__
		self.compile_command = cmd
		self.compiling = ""
		try:
			self.compile_out, self.compile_err, self.compile_retcode = my_execute(cmd, timeout=15)
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

	def check_execution(self):
		"""Compare preprocessor output against reference"""
		environment = self.environment
		out = open(environment.preprocessed, "r").read()
		if not hasattr(environment, 'reference_output'):
			self.error_msg = "no reference output"
			if out:
				out = "Output was:\n"+out
			else:
				out = "Empty Output."
			self.long_error_msg = "Add .ref file for this test case! "+out
			return False
		ref = environment.reference_output.splitlines()
		out = out.splitlines()
		diff = "\n".join(difflib.unified_diff(out, ref))
		if diff == "":
			return True
		else:
			self.error_msg = "output mismatch"
			self.long_error_msg = diff
			return False

	def check_compiler_errors(self):
		if len(self.warnings) > 0:
			self.error_msg = "compiler produced invalid warning"
			return False
		return Test.check_compiler_errors(self)

	def _compile_asm(self):
		self.error_msg = "x10->asm not implemented yet"
		return False

test_factories.insert(0, (lambda name: is_c_file(name) and "preproctest/" in name and "should_fail/" not in name, TestPreprocessor))

# Configurations
def setup_pp(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = []
	global _DEFAULT_DIRS
	_DEFAULT_DIRS = [ "preproctest", "preproctest/should_fail" ]
	config = parser.values
	config.compiler = "pptest"
	config.ppflags = "-I ."

configurations["pp"] = setup_pp
