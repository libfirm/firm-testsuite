from test.test   import Test, ensure_dir
from test.steps  import execute
from test.checks import check_retcode_zero, create_check_reference_output

def step_optitest(environment):
    cmd = "./test_optimization.py %(filename)s" % environment.__dict__
    return execute(cmd, environment, timeout=20)

def make_optitest(environment, filename):
    ensure_dir("build/optitest")

    test = Test(environment, filename)
    environment.filename = filename

    optitest = test.add_step("optitest", step_optitest)
    optitest.add_check(check_retcode_zero)
    optitest.add_check(create_check_reference_output(environment))

    return test

wildcard_factories = [
    ( "*.ir", make_optitest ),
]

def config_optitest(option, opt_str, value, parser):
    config = parser.values
    config.default_dirs = [ "optitest" ]
    config.arch_dirs    = [ ]
    config.expect_url   = "fail_expectations_optitest"

configurations = {
    'optitest': config_optitest
}
