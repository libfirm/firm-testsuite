def setup_sparc(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = [ "sparccode" ]
	config = parser.values
	config.arch_cflags  = "-mtarget=sparc-linux-gnu"
	config.arch_ldflags = "-static"
	config.runexe = "qemu-sparc32plus "
	config.expect_url = "fail_expectations_sparc"

configurations['sparc'] = setup_sparc
