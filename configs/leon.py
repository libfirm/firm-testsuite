def config_leon(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["sparccode"]
    config.arch_cflags  = "-mtarget=sparc-leon-linux-gnu -msoft-float"
    config.arch_ldflags = "-static -msoft-float"
    config.runexe       = "qemu-sparc -r 2.6.40 "
    config.expect_url   = "http://pp.info.uni-karlsruhe.de/git/firm-testresults/plain/fail_expectations-sparc-leon-linux-gnu"

configurations = {
    'leon': config_leon
}
