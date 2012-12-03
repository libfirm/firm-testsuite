def setup_arm(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = [ "armcode" ]
	config = parser.values
	config.cflags += " -mtarget=arm-linux-gnueabihf"
	config.ldflags += " -static"
	config.runexe = "qemu-arm "
	config.expect_url = "http://pp.info.uni-karlsruhe.de/git/firm-testresults/plain/fail_expectations-arm-linux-gnueabihf"

configurations['arm'] = setup_arm
