#!/usr/bin/env python
#
# Stupid cparser wrapper which first exports the C file to a .ir file,
# and then imports this .ir file and compiles it.
# This way you can test the .ir import/export facilities.
import sys
import os
from subprocess import check_output, CalledProcessError

debug = "CPARSER_IMEXPORT_DEBUG" in os.environ

def exec_cparser(args):
	cmdline = ["cparser"] + args
	if debug:
		print " ".join(cmdline)
	try:
		out = check_output(cmdline)
		sys.stdout.write(out)
	except CalledProcessError as e:
		# try to convert python style negative returncodes on signals back to
		# linuxish returncodes (128 + signal number)
		if e.returncode < 0:
			e.returncode = 128 + -(e.returncode)
		sys.exit(e.returncode)

def go(argv):
	# Don't do anything for -fsyntax-only or --E
	if ("-fsyntax-only" in argv) or ("-E" in argv):
		exec_cparser(argv[1:])
		return

	# Step 1 --export-ir
	newargs = []
	# Find -c and -o argument
	i = 1
	irfile = None
	while i < len(argv):
		arg = argv[i]
		if arg == "-o":
			i += 1
			arg = argv[i]
			irfile = arg.replace(".exe", "") + ".ir"
			newargs.append("--export-ir")
			newargs.append("-o")
			newargs.append(irfile)
		else:
			newargs.append(arg)
		i+=1

	exec_cparser(newargs)

	# Step 2 compile .ir file
	newargs = []
	for arg in argv[1:]:
		if arg.endswith(".c"):
			newargs.append(irfile)
			continue
		newargs.append(arg)

	exec_cparser(newargs)

if __name__ == "__main__":
	go(sys.argv)
