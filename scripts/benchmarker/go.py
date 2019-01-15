#!/usr/bin/env python
from __future__ import print_function
import sys
import os

basedir=os.path.dirname(os.path.realpath(__file__))
MAKEFLAGS="-j7"

def makedirs(path):
	try:
		os.makedirs(path)
	except os.error as e:
		pass # all fine

def actions(cparser_rev, libfirm_rev, id, resultdir):
	print("Processing revision %s" % id)
	os.chdir("%s/cparser/libfirm" % basedir)
	os.system("rm -rf build")
	os.system("git checkout -f %s" % libfirm_rev)
	os.system("git clean -xf")
	os.system("make include/libfirm/nodeops.h")
	os.chdir("%s/cparser" % basedir)
	os.system("rm -rf build")
	os.system("git checkout -f %s" % cparser_rev)
	# hack... for old broken makefiles
	try:
		os.system("patch -p0 < ../fix_makefile.patch")
	except:
		pass
	os.system("git clean -xf")
	makedirs(resultdir)
	os.system("CC='ccache gcc' make %s > %s/buildlog.txt 2>&1" % (MAKEFLAGS, resultdir))
	if os.path.exists("build/debug/cparser") and not os.path.exists("build/cparser"):
		os.chdir("%s/cparser/build" % basedir)
		os.system("ln -sf debug/cparser cparser")
	os.chdir("%s/firm-testsuite" % basedir)

	os.system("./makereport --compiler=%s/cparser/build/cparser --valgrind --expect='' --faillog=%s/msgs.txt" % (basedir, resultdir))

revs = open("revs.txt")
for rev in revs:
	rev = rev.strip()
	if rev == "":
		continue
	(cparser_rev, libfirm_rev) = rev.split()
	id = "%s_%s" % (cparser_rev, libfirm_rev)
	resultdir = "%s/result/%s" % (basedir,id)
	# Check if results exist...
	if os.path.exists(resultdir):
		print("%s already exists, skipping" % id)
		continue

	# Checkout and build
	actions(cparser_rev, libfirm_rev, id, resultdir)
