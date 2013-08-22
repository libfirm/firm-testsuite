from plugins.c   import setup_c_environment
from test.test   import Test
from test.steps  import execute
from test.checks import check_retcode_zero
import os.path

def step_runcommand(environment):
    """Preprocess c source code (to stdout)"""
    cmd = environment.cmd % environment.__dict__
    return execute(environment, cmd, timeout=20)

def check_retcode_not_zero(result):
    """Check that return code of the step command is not zero"""
    if result.retcode == 0:
        result.error = "returncode zero"

def read_cmds(environment, filename):
    cmd = open(filename, "rb").read()
    while cmd.endswith("\n"):
        cmd = cmd[:-1]
    environment.cmd = cmd
    environment.filename = filename
    environment.basename = os.path.basename(filename)

def make_cmd_should_fail(environment, filename):
    read_cmds(environment, filename)

    test = Test(environment, filename)
    preprocess = test.add_step("cmd_should_fail", step_runcommand)
    preprocess.add_check(check_retcode_not_zero)
    return test

def make_cmd_should_work(environment, filename):
    read_cmds(environment, filename)

    test = Test(environment, filename)
    preprocess = test.add_step("cmd_should_work", step_runcommand)
    preprocess.add_check(check_retcode_zero)
    return test

test_factories = [
    (lambda name: name.endswith(".cmd") and "should_fail/" in name, make_cmd_should_fail),
    (lambda name: name.endswith(".cmd")                           , make_cmd_should_work),
]
wildcard_factories = [
    ( "*.cmd", make_cmd_should_work ),
]
