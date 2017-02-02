def config_sparc(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["sparccode"]
    config.arch_cflags  = "-target sparc-linux-gnu"
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-sparc32plus "
    config.expect_url   = "https://github.com/libfirm/testresults/raw/master/fail_expectations-"

configurations = {
    'sparc': config_sparc
}
