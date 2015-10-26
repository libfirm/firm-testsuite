def config_leon_ilp(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["sparccode"]
    config.arch_cflags  = "-target sparc-leon-linux-gnu -bspiller=daemel -bra-chordal-co-algo=ilp"
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-sparc -r 2.6.40 "
    config.expect_url   = "http://pp.info.uni-karlsruhe.de/git/firm-testresults/plain/fail_expectations-sparc-leonilp"

configurations = {
    "leonilp": config_leon_ilp
}
