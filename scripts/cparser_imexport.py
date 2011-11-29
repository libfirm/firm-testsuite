#!/usr/bin/env python
import sys
import os
from subprocess import check_output

newargs = [ "cparser" ]
# Find -c and -o argument
i = 1
irfile = None
while i < len(sys.argv):
	arg = sys.argv[i]
	if arg == "-o":
		i+=1
		arg = sys.argv[i]
		irfile = arg.replace(".exe", "") + ".ir"
		newargs.append("--export-ir")
		newargs.append("-o")
		newargs.append(irfile)
	else:
		newargs.append(arg)
	i+=1

check_output(newargs)

newargs = [ "cparser" ]
i = 1
while i < len(sys.argv):
	arg = sys.argv[i]
	if arg.endswith(".c"):
		newargs.append(irfile)
	else:
		newargs.append(arg)
	i+=1

check_output(newargs)
