target_triple = "arm-linux-gnueabi"
def config_arm(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["armcode"]
    config.arch_cflags  = "-target " + target_triple
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-arm "
    config.expect_url   = "http://pp.info.uni-karlsruhe.de/git/firm-testresults/plain/fail_expectations-" + target_triple

configurations = {
    'arm':         config_arm,
    target_triple: config_arm,
}
