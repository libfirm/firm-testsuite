def setup_amd64(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = []
	config = parser.values
	config.cflags += " -m64 -bisa=amd64"
	config.expect_url = "fail_expectations_amd64"

configurations['amd64'] = setup_amd64
