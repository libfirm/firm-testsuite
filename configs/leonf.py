def config_leonf(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["sparccode"]
    config.arch_cflags  = "-mtarget=sparc-leon-linux-gnu -bspiller=daemel -bregalloc=pref"
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-sparc -r 2.6.40 "
    config.expect_url   = "fail_expectations_sparc_leonf"

configurations = {
    "leonf": config_leonf
}
