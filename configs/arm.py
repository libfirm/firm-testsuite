def setup_arm(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = [ "armcode" ]
	config = parser.values
	config.cflags += " -mtarget=arm-linux-gnu"
	config.ldflags += " -static"
	config.runexe = "qemu-arm "
	config.expect_url = "fail_expectations_arm"

configurations['arm'] = setup_arm
