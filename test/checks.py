import os
import difflib
from functools import partial


def check_retcode_zero(result):
    """Check that the return code of the step command is zero"""
    if result.retcode != 0:
        result.error = "returncode not zero but %s" % result.retcode


def check_firm_problems(result):
    """Check output of step command for problematic firm messages"""
    for line in result.stderr.splitlines() + result.stdout.splitlines():
        if line.startswith("Verify warning:"):  # libfirm verifier warnings
            result.error = "verify warning"
            break
        elif "libFirm panic" in line:
            result.errors_msg = "libFirm panic"
            break


def check_cparser_problems(result):
    """Check output of step command for problematic cparser outputs"""
    for line in result.stderr.splitlines() + result.stdout.splitlines():
        if "linker reported an error" in line:
            result.error = "linker error"
            break
        elif "assembler reported an error" in line:
            result.error = "assembler error"
            break


def search_warnings_errors(result):
    """Parse step output for compiler warnings and errors and set
    result.warnings and result.errors list"""
    if hasattr(result, "warnings"):
        assert hasattr(result, "errors")
        return
    result.warnings = []
    result.errors   = []
    for line in result.stderr.splitlines() + result.stdout.splitlines():
        if ": warning: " in line:  # frontend warnings
            result.warnings.append(line)
        elif " error: " in line:  # frontend errors
            result.errors.append(line)


def check_no_errors(result):
    """Check that we had no compiler errors"""
    search_warnings_errors(result)
    n_errors = len(result.errors)
    if n_errors > 0:
        result.error = "%d compile errors" % n_errors


def check_missing_errors(result):
    """Check that we had at least 1 compiler error"""
    search_warnings_errors(result)
    n_errors = len(result.errors)
    if n_errors == 0:
        result.error = "missed error"


def _help_check_reference_output(result, reference):
    """Compare stdout with a given reference output"""
    output = result.stdout
    if output == reference:
        return

    result.error = "output mismatch"
    # Try to create a diff
    try:
        ref_decoded = reference.decode("utf-8").splitlines()
        out_decoded = output.decode("utf-8").splitlines()
        result.diff = "\n".join(difflib.unified_diff(out_decoded, ref_decoded))
    except:
        # We might end up here when utf-8 decoding failed
        result.diff = "unable to compare output/reference (non utf-8 encoding?)"


def create_check_reference_output(environment):
    """Read %(environment.filename)s.ref file and return a checker which
    compares stdout with it."""
    ref_file = environment.filename + ".ref"
    # check for the common case of missing reference output and produce an
    # understandable message
    if not os.path.isfile(ref_file):
        raise Exception("reference output '%s' missing" % (ref_file,))
    reference_output = open(ref_file, "rb").read()
    return partial(_help_check_reference_output, reference=reference_output)


def check_missing_warnings(result):
    """Check that we had at least 1 compiler warning"""
    search_warnings_errors(result)
    n_warnings = len(result.warnings)
    if n_warnings == 0:
        result.error = "missed warnings"


def check_no_warnings(result):
    """Check that we had no compiler warnings"""
    search_warnings_errors(result)
    n_warnings = len(result.warnings)
    if n_warnings > 0:
        result.error = "produced invalid warning"


def _help_check_warnings_reference(result, reference):
    search_warnings_errors(result)
    n_warnings   = len(result.warnings)
    n_expected   = len(reference.splitlines())
    warning_text = "\n".join(result.warnings) + "\n"
    if n_warnings != n_expected:
        result.error = "reported %s warnings, expected %s" % (n_warnings, n_expected)
    elif warning_text != reference:
        result.error = "reported different warnings"


def create_check_warnings_reference(environment):
    """Read %(environment.filename)s.ref file and compare it with the warnings
    the compiler actually reported. If the reference file is missing we just
    check that there are any warnings at all."""
    warnings_file = environment.filename + ".ref"
    if not os.path.isfile(warnings_file):
        return check_missing_warnings
    else:
        reference = open(warnings_file, "rb").read()
        return partial(_help_check_warnings_reference, reference=reference)
