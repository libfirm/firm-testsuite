def setup_leon_ilp(option, opt_str, value, parser):
	global _ARCH_DIRS
	_ARCH_DIRS = [ "sparccode" ]
	config = parser.values
	config.arch_cflags  = "-mtarget=sparc-leon-linux-gnu -bspiller=daemel -bra-chordal-co-algo=ilp"
	config.arch_ldflags = "-static"
	config.runexe = "qemu-sparc -r 2.6.40 "
	config.expect_url = "fail_expectations_sparc_leonilp"

configurations["leonilp"] = setup_leon_ilp
