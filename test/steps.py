import util.shell as shell
import sys
from time import time

class StepResult(object):
    """Captures the result of a single "step". Typical steps are the execution
    of 1 external command with additional verification/checking of the results.
    In a typical test we have two steps: compilation with checking of compiler
    warnings+errors and execution of the compiled program with comparison of the
    output with a reference output."""
    def __init__(self):
        self.cmd      = None
        self.error    = None
        self.retcode  = 0
        self.stderr   = ""
        self.stdout   = ""
        self.time     = None

    # please excuse the internet slang method names ;-)
    def fail(self):
        """returns True if there were errors so far"""
        return self.error is not None

    def win(self):
        """returns True if there were no errors so far"""
        return not self.fail()


def execute(environment, cmd, timeout):
    "Executes an external command and returns a StepResult object"
    result     = StepResult()
    result.cmd = cmd
    if environment.debug:
        sys.stderr.write(cmd + "\n")
    try:
        begin = time()
        result.stdout, result.stderr, result.retcode = shell.execute(cmd, timeout=timeout)
        result.time = time() - begin
    except shell.SigKill as e:
        result.error = e.name
    except MemoryError as e:
        result.error = "out of memory"
    except OSError as e:
        result.error = e.strerror
    return result


def step_execute(environment):
    """Run compiled test program"""
    if not hasattr(environment, "runexe"):
        environment.runexe = ""
    if not hasattr(environment, "executionargs"):
        environment.executionargs = ""
    cmd = "%(runexe)s%(executable)s%(executionargs)s" % environment.__dict__
    return execute(environment, cmd, timeout=30)
