#! /usr/bin/env python

import os
import sys
import argparse

parser = argparse.ArgumentParser(description='Run optimization on ir file and count a Nodetype')
parser.add_argument('-d', '--debug', action='store_true', help='print optimizer command')
parser.add_argument('input')
#parser.add_argument('function')
#parser.add_argument('node')
args = parser.parse_args()

# read the header
with open (args.input, 'r') as inputfile:
	line = inputfile.readline()
	if (line[:1] != '#'):
		sys.stderr.write ('Error: No header found in ' + args.input + '\n')
		exit (2)

	args.function = line.split()[1]
	args.node = line.split()[2]

# replace the function alias with the actual function name
with open ('function-aliases', 'r') as alias:
	line = alias.readline()
	found_func = False
	while (line):
		if (args.function == line.split()[0]):
			args.function = line.split()[1]
			found_func = True
			break
		line = alias.readline()
	if (not found_func):
		sys.stderr.write ('Warning: ' + args.function + ' not found in function-aliases.\n')

# run the optimization
command = 'optimizer {0} {1}'.format (args.input, args.function)

if (args.debug):
	sys.stderr.write (command + '\n')

if (os.system (command)):
	sys.stderr.write ('Aborting due to an error!\n')
	exit (2)

# count specific nodes and print their number
def inspect (filename, infix):
	with open (filename) as openfile:
		in_irg_block = False
		node_counter = 0
		for line in openfile:
			if (line[:1] == '}'):
				in_irg_block = False
				continue
			if (line[:3] == 'irg'):
				in_irg_block = True
				continue
			if (in_irg_block):
				if (line[1:len (args.node) + 1] == args.node):
					node_counter += 1

		print ('Node Count for \'{0}\' {1} optimization: {2}'.format
				(args.node, infix, node_counter))

inspect (args.input, 'before')
inspect ('../build/optitest/opt-{0}'.format (args.input), 'after')
