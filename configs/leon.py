def setup_leon(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = [ "sparccode" ]
	config = parser.values
	config.cflags += " -mtarget=sparc-leon-linux-gnu -msoft-float"
	config.ldflags += " -static -msoft-float"
	config.runexe = "qemu-sparc -r 2.6.40 "
	config.expect_url = "fail_expectations_sparc_leon"

configurations['leon'] = setup_leon
