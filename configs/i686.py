target_triple = "i686-linux-gnu"
def config_i686(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = []
    # Note that we do leave out target, so cparser does not think we are
    # cross-compiling...
    config.arch_cflags  = "-march=native -m32"
    config.arch_ldflags = "-m32"
    config.expect_url   = "http://pp.info.uni-karlsruhe.de/git/firm-testresults/plain/fail_expectations-" + target_triple

configurations = {
    target_triple: config_i686,
}
