def config_arm(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["armcode"]
    config.arch_cflags  = "-mtarget=arm-linux-gnueabihf"
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-arm "
    config.expect_url   = "http://pp.info.uni-karlsruhe.de/git/firm-testresults/plain/fail_expectations-arm-linux-gnueabihf"

configurations = {
    'arm': config_arm
}
