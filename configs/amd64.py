def config_amd64(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = []
    config.arch_cflags  = "-m64 -bisa=amd64"
    config.arch_ldflags = ""
    config.expect_url   = "fail_expectations_amd64"

configurations = {
    'amd64': config_amd64
}
