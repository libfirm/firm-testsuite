target_triple = "riscv32-unknown-linux-gnu"
def config_riscv(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = []
    config.arch_cflags  = "-target " + target_triple
    config.arch_ldflags = "-static"
    config.runexe       = "qemu-riscv32 "
    config.expect_url   = "https://github.com/libfirm/testresults/raw/master/fail_expectations-" + target_triple

configurations = {
    'riscv32':        config_riscv,
    target_triple: config_riscv,
}
