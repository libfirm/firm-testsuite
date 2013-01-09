import codecs

class TestPreprocessor(CTest):
	def __init__(self, filename, environment):
		super(TestPreprocessor, self).__init__(filename, environment)
		environment.preprocessed = environment.builddir + "/" + environment.filename + ".i"
		environment.cflags += " -I ."

	def compile(self):
		environment = self.environment
		ensure_dir(os.path.dirname(environment.preprocessed))

		cmd = "%(compiler)s -E %(cflags)s %(filename)s -o %(preprocessed)s" % environment.__dict__
		self.compile_command = cmd
		self.compiling = ""
		try:
			self.compile_out, self.compile_err, self.compile_retcode = my_execute(cmd, timeout=15)
		except SigKill as e:
			self.error_msg = "compiler: %s" % (e.name)
			self.long_error_msg = "\n".join((self.compile_command, self.compiling))
			return False
		except OSError as e:
			self.error_msg = "compilation failed (%s)" % (e.strerror)
			self.long_error_msg = "\n".join((self.compile_command, self.compiling))
			return False

		c = self.parse_compiler_output()
		if not c: return c
		return True

	def check_execution(self):
		"""Compare preprocessor output against reference"""
		environment = self.environment
		out = codecs.open(environment.preprocessed, "r").read()
		return self.check_reference_output(out)

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
	config.arch_cflags = "--no-external-pp -I ."
	config.expect_url = "fail_expectations_pp"

configurations["pp"] = setup_pp
