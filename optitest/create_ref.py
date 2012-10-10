#!/usr/bin/python

import subprocess
import argparse
import io
import os.path

parser = argparse.ArgumentParser(description='Create a reference file for a test')
parser.add_argument('file')
args = parser.parse_args()

def try_opt (ir):
	try:
		return subprocess.check_output (args = ['./test_optimization.py', ir])
	except subprocess.CalledProcessError as e:
		print ('Testing ' + ir + ' yielded an error.')
		print (e)
	except Exception as f:
		print (f)

with open (args.file + '.ref', 'wb') as ref:
	output = try_opt (args.file)
	if (output):
		ref.write (output)
