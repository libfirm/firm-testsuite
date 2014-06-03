target_triple = "x86_64-linux-gnu"
def config_x86_64(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = []
    config.arch_cflags  = "-mtarget=" + target_triple
    config.arch_ldflags = ""
    config.expect_url   = "fail_expectations-" + target_triple

configurations = {
    'amd64':       config_x86_64,
    target_triple: config_x86_64,
}
