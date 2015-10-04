# llvm-lit inspired tests
import os
from test.test   import Test
from test.steps  import execute
from test.checks import check_retcode_zero
import functools
import re

_VALGRIND_MEMCHECK_FACTOR = 30

runmatch = re.compile('RUN:\s*(.*)$')

def step_run(environment, cmd):
    return execute(environment, cmd, timeout=environment.compile_timeout, shell=True)

def create_run_step(cmd):
    return functools.partial(step_run, cmd=cmd)

def make_lit_test(environment, filename):
    # Extract run lines from test
    runlines = []
    for line in open(filename, "r"):
        match = runmatch.search(line)
        if not match:
            break
        cmd = match.group(1)
        cmd = cmd.replace("%s", filename)
        cmd = cmd.replace("%S", os.path.dirname(filename))
        # hack
        cmd = cmd.replace("FileCheck", "scripts/FileCheck")
        # TODO: handle further replacements
        cmd = cmd.replace("%%", "%")
        runlines.append(cmd)

    if len(runlines) == 0:
        raise Exception("Coulnd't find any RUN: lines at beginning of %s" %
                        filename)

    environment.filename = filename
    test = Test(environment, filename)
    i = 0
    for cmd in runlines:
        runstep = test.add_step("run%d" % i, create_run_step(cmd))
        i += 1
        runstep.add_check(check_retcode_zero)

    return test

test_factories = [
    ( lambda name: "lit/" in name, make_lit_test ),
]

def register_options(opts):
    pass
