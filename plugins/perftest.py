from   copy        import deepcopy
from   plugins.c   import step_compile_c, setup_c_environment
from   test.checks import check_retcode_zero, check_firm_problems, check_no_errors, check_cparser_problems
from   test.steps  import step_execute
from   test.test   import Test, ensure_dir
import os
import re
import sys

def check_valgrind_perf(result):
    m = re.search('I\s+refs:\s+([0-9,]+)', result.stderr)
    if not m:
        result.error = "Couldn't parse valgrind result"
    else:
        result.error = m.group(1)

def check_qemu_perf(result):
    m = re.search('Instructions:\s*([0-9]+)', result.stderr)
    if not m:
        result.error = "Couldn't parse qemu result"
    else:
        result.error = m.group(1)

def make_perftest(environment, filename, size, check_perf):
    setup_c_environment(environment, filename)
    environment.executable = environment.builddir + "/" + environment.filename + ".exe"
    ensure_dir(os.path.dirname(environment.executable))
    if size != 0:
        environment.executionargs = " %s" % size

    test = Test(environment, filename)
    compile = test.add_step("compile", step_compile_c)
    compile.add_check(check_cparser_problems)
    compile.add_check(check_no_errors)
    compile.add_check(check_firm_problems)
    compile.add_check(check_retcode_zero)

    execute = test.add_step("execute", step_execute)
    execute.add_check(check_retcode_zero)
    execute.add_check(check_perf)
    return test

sizes = {
    "opt/simple.c":                 0, # this is here to get a baseline of glibc initialisation code
    "opt/queens-handoptimized.c":   11,
    "opt/Hanoi.c":                  20,
    "opt/Sieve.c":                  150,
    "opt/SieveBits.c":              20000,
    "opt/QuickSort.c":              100000,
    "opt/MergeSort.c":              100000,
    "opt/HeapSort.c":               100000,
    "opt/fib.c":                    30,
    "opt/fbench.c":                 5000,
    "perf/crafty.c":                100000,
    "perf/serpent.c":               600,
    "perf/vpr0.c":                  3000,
    "langshootout/fannkuch.c":      9,
    "langshootout/bintree.c":       11,
    "langshootout/n-body.c":        2000,
    "langshootout/spectral-norm.c": 300,
    "langshootout/partial-sums.c":  30000,
    "langshootout/fasta.c":         10000,
}
floatheavy = set([
    "opt/fbench.c",
    "perf/vpr0.c",
    "langshootout/n-body.c",
    "langshootout/spectral-norm.c",
    "langshootout/partial-sums.c"
])

def create_performance_testset(config, args):
    if not args:
        args = sizes.keys()

    tests = []
    for name in args:
        if not name in sizes:
            sys.stderr.write("Warning: no size setup for test '%s'\n" % name)
            size = 0
        else:
            size = sizes[name]

        environment = deepcopy(config)
        if "valgrind" in config.runexe:
            check_perf = check_valgrind_perf
        else:
            assert "qemu" in config.runexe
            check_perf = check_qemu_perf
        test = make_perftest(environment, name, size, check_perf)
        tests.append(test)
    return tests

def config_valgrind(option, opt_str, value, parser):
    config = parser.values
    config.runexe         = "valgrind --tool=callgrind "
    config.create_testset = create_performance_testset
    config.default_dirs   = []
    config.arch_dirs      = []

def config_leonperf(option, opt_str, value, parser):
    config_valgrind(option, opt_str, value, parser)
    config = parser.values
    config.arch_cflags   = " -msoft-float"
    config.arch_ldflags += " -static -msoft-float"
    config.runexe        = "qemu-count -r 2.6.40 "
    if "cparser" in config.cc:
        config.arch_cflags += " -mtarget=sparc-leon-linux-gnu"
    for b in floatheavy:
        sizes[b] /= 30

def config_leonperf_hwfloat(option, opt_str, value, parser):
    config_valgrind(option, opt_str, value, parser)
    config = parser.values
    config.arch_cflags   = " -msoft-float"
    config.arch_ldflags += " -static -msoft-float"
    config.runexe        = "qemu-count -r 2.6.40 "
    if "cparser" in config.cc:
        config.arch_cflags += " -mtarget=sparc-leon-linux-gnu"
    for b in floatheavy:
        sizes[b] /= 30

configurations = {
    "valgrind":         config_valgrind,
    "leonperf_hwfloat": config_leonperf_hwfloat,
    "leonperf":         config_leonperf,
}
