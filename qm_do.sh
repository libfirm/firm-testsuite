#!/bin/bash

# Hardcode some values here for now...
TEST_COMPILER="cparser"
TEST_CFLAGS="-v -O3 -ffp-strict"
LINKFLAGS="-lm"
BUILDDIR="build"
OUTPUTDIR="/tmp"
logfile=/dev/null

mkdir -p "$BUILDDIR"

file="$1"

dir="`dirname $file`"

FILE_FLAGS="`awk '/\/\\*\\$ .* \\$\\*\// { for (i = 2; i < NF; ++i) printf "%s ", $i }' $file`"
CFLAGS="$ALL_CFLAGS -I$dir"
TESTRUNNER="./default_test.sh"

if test -x $dir/test.sh; then
 	TESTRUNNER="$dir/test.sh"
fi
ERROR=""

. $TESTRUNNER
do_test || (echo "Error: $ERROR" 1>&2 ; exit 1)
