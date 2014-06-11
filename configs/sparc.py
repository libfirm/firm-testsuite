def config_sparc(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["sparccode"]
    config.arch_cflags  = "-mtarget=sparc-linux-gnu"
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-sparc32plus "
    config.expect_url   = "http://pp.info.uni-karlsruhe.de/git/firm-testresults/plain/fail_expectations-sparc"

configurations = {
    'sparc': config_sparc
}
