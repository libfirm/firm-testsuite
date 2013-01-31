import os
from test.test   import Test, ensure_dir
from test.steps  import execute, step_execute
from test.checks import check_retcode_zero, check_missing_errors, check_no_errors, check_no_warnings, check_firm_problems, check_cparser_problems, create_check_reference_output, create_check_warnings_reference
from test.embedded_cmds import parse_embedded_commands
from functools import partial

def step_compile_c(environment):
    """Compile c source code to executable"""
    cmd = "%(cc)s %(filename)s %(cflags)s %(ldflags)s -o %(executable)s" % environment.__dict__
    return execute(environment, cmd, timeout=60)

def step_compile_c_syntax_only(environment):
    cmd = "%(cc)s %(filename)s %(cflags)s -fsyntax-only" % environment.__dict__
    return execute(environment, cmd, timeout=20)

def step_compile_c_asm(environment):
    """Compile c source code to assembler"""
    cmd = "%(cc)s %(filename)s %(cflags)s -S -o %(asmfile)s" % environment.__dict__
    result = execute(environment, cmd, timeout=60)
    if result.fail():
        return result

    try:
        result.asm = open(environment.asmfile, "rb").read()
    except:
        result.error = "couldn't read assembler output"
    return result

def setup_c_environment(environment, filename):
    environment.filename = filename
    environment.cflags  += " %s" % environment.arch_cflags
    environment.cflags  += " -I%s " % os.path.dirname(environment.filename)
    environment.ldflags += " %s" % environment.arch_ldflags

def make_c_test(environment, filename):
    setup_c_environment(environment, filename)
    environment.executable = environment.builddir + "/" + environment.filename + ".exe"
    ensure_dir(os.path.dirname(environment.executable))

    test = Test(environment, filename)

    compile = test.add_step("compile", step_compile_c)
    compile.add_check(check_cparser_problems)
    compile.add_check(check_no_errors)
    compile.add_check(check_firm_problems)
    compile.add_check(check_retcode_zero)

    asmchecks = parse_embedded_commands(environment, environment.filename)
    if asmchecks:
        environment.asmfile = environment.builddir + "/" + environment.filename + ".s"
        ensure_dir(os.path.dirname(environment.asmfile))
        asm = test.add_step("asm", step_compile_c_asm)
        asm.add_checks(asmchecks)

    execute = test.add_step("execute", step_execute)
    execute.add_check(check_retcode_zero)
    execute.add_check(create_check_reference_output(environment))
    return test

def make_make_c_test_cflags(addcflags):
    def make(environment, filename, addcflags):
        environment.cflags += addcflags
        return make_c_test(environment, filename)
    return partial(make, addcflags=addcflags)

def make_c_should_fail(environment, filename):
    setup_c_environment(environment, filename)
    parse_embedded_commands_no_check(environment)

    test = Test(environment, filename)
    compile = test.add_step("compile", step_compile_c_syntax_only)
    compile.add_check(check_missing_errors)
    test.steps.append(compile)
    return test

def parse_embedded_commands_no_check(environment):
    checks = parse_embedded_commands(environment, environment.filename)
    if checks:
        raise Exception("embedded checks not allowed")

def make_c_should_warn(environment, filename):
    setup_c_environment(environment, filename)
    environment.cflags += " -Wall -W"
    parse_embedded_commands_no_check(environment)

    test = Test(environment, filename)
    compile = test.add_step("compile", step_compile_c_syntax_only)
    compile.add_check(check_retcode_zero)
    compile.add_check(check_no_errors)
    compile.add_check(create_check_warnings_reference(environment))
    return test

def make_c_should_not_warn(environment, filename):
    setup_c_environment(environment, filename)
    environment.cflags += " -Wall -W"
    parse_embedded_commands_no_check(environment)

    test = Test(environment, filename)
    compile = test.add_step("compile", step_compile_c_syntax_only)
    compile.add_check(check_retcode_zero)
    compile.add_check(check_no_errors)
    compile.add_check(check_no_warnings)
    return test

def is_c_file(name):
    return name.endswith(".c") or name.endswith(".cc")

test_factories = [
    ( lambda name: is_c_file(name) and "C/should_fail/"   in name, make_c_should_fail ),
    ( lambda name: is_c_file(name) and "C++/should_fail/" in name, make_c_should_fail ),
    ( lambda name: is_c_file(name) and "C/should_warn/"   in name, make_c_should_warn ),
    ( lambda name: is_c_file(name) and "C/nowarn/"        in name, make_c_should_not_warn ),
    ( lambda name: is_c_file(name) and "C/gnu99/"         in name, make_make_c_test_cflags(" -std=gnu99") ),
    ( lambda name: is_c_file(name) and "C/MS/"            in name, make_make_c_test_cflags(" --ms") ),
    ( lambda name: is_c_file(name) and "C/"               in name, make_make_c_test_cflags(" -std=c99") ),
]
wildcard_factories = [
    ( "*.c",  make_c_test ),
    ( "*.cc", make_c_test ),
]

def register_options(opts):
    opts.add_option("--cflags", dest="cflags",
                    help="Use CFLAGS to compile test programs",
                    metavar="CFLAGS")
    opts.add_option("--archcflags", dest="archcflags",
                    help="Append ARCHCFLAGS to cflags", metavar="ARCHCFLAGS")
    opts.add_option("--ldflags", dest="ldflags",
                    help="Use LDFLAGS to compile test programs",
                    metavar="LDFLAGS")
    opts.add_option("--archldflags", dest="archldflags",
                    help="Append ARCHLDFLAGS to LDFLAGS",
                    metavar="ARCHLDFLAGS")
    opts.add_option("--cc", dest="cc",
                    help="Use CC to compile c programs", metavar="CC")
    opts.set_defaults(
        cc="cparser",
        cflags="-O3",
        arch_cflags="-march=native -m32",
        ldflags="-lm",
        arch_ldflags="-m32"
    )
