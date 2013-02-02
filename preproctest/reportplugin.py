from plugins.c   import setup_c_environment
from test.test   import Test
from test.steps  import execute
from test.checks import check_retcode_zero, check_no_errors, create_check_reference_output, create_check_warnings_reference, check_missing_errors


def step_preprocess(environment):
    """Preprocess c source code (to stdout)"""
    cmd = "%(cc)s %(filename)s %(cflags)s -E -o-" % environment.__dict__
    return execute(environment, cmd, timeout=20)


def setup_preprocess_environment(environment, filename):
    environment.filename = filename
    if "cparser" in environment.cc:
        environment.cflags += " --no-external-pp"
    environment.cflags  += " %s -I." % environment.arch_cflags
    environment.ldflags += " %s" % environment.arch_ldflags

def make_preprocessor_test(environment, filename):
    setup_preprocess_environment(environment, filename)

    test = Test(environment, filename)
    preprocess = test.add_step("preprocess", step_preprocess)
    preprocess.add_check(check_no_errors)
    preprocess.add_check(check_retcode_zero)
    preprocess.add_check(create_check_reference_output(environment))
    return test


def make_preprocessor_should_warn(environment, filename):
    setup_preprocess_environment(environment, filename)

    test = Test(environment, filename)
    preprocess = test.add_step("preprocess", step_preprocess)
    preprocess.add_check(check_no_errors)
    preprocess.add_check(check_retcode_zero)
    preprocess.add_check(create_check_warnings_reference(environment))
    return test


def make_preprocessor_should_fail(environment, filename):
    setup_preprocess_environment(environment, filename)

    test = Test(environment, filename)
    preprocess = test.add_step("preprocess", step_preprocess)
    preprocess.add_check(check_missing_errors)
    return test

test_factories = [
    (lambda name: name.endswith(".c") and "preproctest/should_fail/" in name, make_preprocessor_should_fail),
    (lambda name: name.endswith(".c") and "preproctest/should_warn/" in name, make_preprocessor_should_warn),
    (lambda name: name.endswith(".c") and "preproctest/" in name,             make_preprocessor_test),
]


# Configurations
def setup_pp(option, opt_str, value, parser):
    config = parser.values
    config.default_dirs = ["preproctest", "preproctest/should_fail", "preproctest/should_warn"]
    config.arch_dirs    = []
    config.arch_cflags  = ""
    config.expect_url   = ""

configurations = {
    "pp": setup_pp
}
