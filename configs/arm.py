def config_arm(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["armcode"]
    config.arch_cflags  = "-mtarget=arm-linux-gnueabi"
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-arm "
    config.expect_url   = "fail_expectations-arm-linux-gnueabi"

configurations = {
    'arm': config_arm
}
