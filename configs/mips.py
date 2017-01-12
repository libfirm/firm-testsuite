target_triple = "mips-linux-gnu"
def config_mips(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = ["mipscode"]
    config.arch_cflags  = "-target " + target_triple
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-mips "
    config.expect_url   = "http://pp.info.uni-karlsruhe.de/git/firm-testresults/plain/fail_expectations-" + target_triple

configurations = {
    'mips':        config_mips,
    target_triple: config_mips,
}
