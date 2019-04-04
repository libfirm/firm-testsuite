# A module to parse commands embedded into the tests themselves
import re
import sys
from functools import partial


def _check_regex(result, regex, txt, count, expected_result):
    realcount = 0
    for line in result.asm.splitlines():
        if regex.search(line):
            realcount += 1
            if realcount > count:
                break
    if not expected_result and realcount > 0:
        result.error = "!check '%s' failed" % (txt,)
    elif expected_result and count == 0 and realcount == 0:
        result.error = "check '%s' failed" % (txt,)
    elif count > 0 and realcount != count:
        assert expected_result
        result.error = "check[%s] '%s' failed" % (count, txt,)


def _embedded_add_check(environment, regex_string, count_arg, flag):
    """create a regex checker (for assembler output)"""
    c = 0
    if count_arg:
        if flag:
            c = int(count_arg[1:-1])
        else:
            raise Exception("!check cannot be used with an argument")
    regex = re.compile(regex_string)
    return partial(_check_regex, regex=regex, txt=regex_string.decode("utf-8"), count=c, expected_result=flag)


def _parse_embedded_command(environment, cmd):
    """parse one /*$ $*/ embedded command"""
    cmdre = re.compile(b"(!?check(\[[0-9]+\])?|shell|cflags|ldflags|compiletimeout)(.*)")
    m = cmdre.match(cmd)
    checkers = []
    if m:
        base = m.group(1)
        if m.group(2):
            base = base[0:-len(m.group(2))]
        if m.group(3) and m.group(3).strip():
            arg = m.group(3).strip()
        else:
            sys.stderr.write("Error: missing command argument for %s\n" % base)
            return checkers
        base = base.decode("utf-8")
        if base == "check":
            checker = _embedded_add_check(environment, arg, m.group(2), True)
            checkers.append(checker)
        elif base == "!check":
            checker = _embedded_add_check(environment, arg, m.group(2), False)
            checkers.append(checker)
        elif base == "cflags":
            environment.cflags += " %s" % (arg.decode("utf-8"),)
        elif base == "ldflags":
            environment.ldflags += " %s" % (arg.decode("utf-8"),)
        elif base == "compiletimeout":
            # compiletimeout requires an integer argument specifying the compile timeout in seconds
            try:
                timeout = int(arg.decode("utf-8"))
                if timeout > 0:
                    environment.compile_timeout = timeout
            except ValueError:
                sys.stderr.write("Error: invalid argument format %s\n" % arg)
        else:
            sys.stderr.write("Error: unsupported command %s\n" % base)
    else:
        # treat as a cflag option
        environment.cflags += " %s" % (cmd.strip().decode("utf-8"), )
    return checkers


def parse_embedded_commands(environment, filename):
    """Parse a given file for embedded test commands (/*$ ... $*/ sequences).
    Commands may modify the environment (like adding cflags, ldflags) or create
    additional checkers for a step which produces assembler output."""
    cmd_regex = re.compile(b"/\\*\\$ (.+) \\$\\*/")
    checkers = []
    for line in open(filename, "rb"):
        m = cmd_regex.search(line)
        if m:
            cmd = m.group(1)
            if environment.debug:
                sys.stderr.write("%s: embedded cmd %s\n" % (filename, cmd))
            subcheckers = _parse_embedded_command(environment, cmd)
            if subcheckers:
                checkers += subcheckers
    return checkers
