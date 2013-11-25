def config_import_export(option, opt_str, value, parser):
    config = parser.values
    config.arch_dirs    = []
    #config.arch_cflags  = "-m64 -bisa=amd64"
    #config.arch_ldflags = ""
    #config.expect_url   = "fail_expectations_amd64"
    config.cc = "scripts/cparser_imexport.py"

configurations = {
    'import-export': config_import_export
}
