#!/usr/bin/env python
from __future__ import print_function
import sys
import re

def read_rev(cparser_rev, libfirm_rev):
	rev = "%s_%s" % (cparser_rev, libfirm_rev)
	try:
		inp = open("result/%s/msgs.txt" % rev)
	except:
		return
	values = {}
	for line in inp:
		line = line.strip()
		if line == "":
			continue
		search = re.search("^.*/([a-zA-Z0-9-]+)\\.c\s+([0-9,]+)$", line)
		if not search:
			search = re.search("^.*/([a-zA-Z0-9-]+)\\.c\s+", line)
			if search:
				name         = search.group(1)
				#values[name] = "-1"
				continue
			print("Parse error: %s" % line)
		name = search.group(1)
		value = search.group(2)
		value = value.replace(",", "")
		values[name] = value
	print("\t{ ")
	print('"rev": "%s", ' % rev)
	print('"info": "%s", ' % open("result/%s/info.txt" % rev).read().replace('\\', '\\\\').replace('"', '\\"').replace('\n', '<br/>'))
	for (key,value) in values.iteritems():
		print('"%s": %s, ' % (key,value), end=' ')
	print(" },\n")

revs = open("revs.txt")
print("data = [\n")
for line in revs:
	line = line.strip()
	if line == "":
		continue
	(cparser_rev, libfirm_rev) = line.split()
	read_rev(cparser_rev, libfirm_rev)
print("]\n")

