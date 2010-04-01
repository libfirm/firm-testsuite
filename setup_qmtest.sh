#!/bin/sh
#
# Create qmtest test-database from firm testsuite
qmtest create-tdb
DIRS="backend x86code opt C C/pragmatic C/should_fail C/gnu99 ack langshootout llvm"
ME="`readlink -f "$0"`"
HOMEDIR="`dirname "$ME"`"
for dir in $DIRS; do
	for file in $dir/*.c; do
		name="`basename "$file" .c`"
		TESTNAME="`echo "$dir/$name" | tr '[:upper:]' '[:lower:]' | tr '.' '_' | tr '/' '.'`"
		echo "Creating test $TESTNAME"
		qmtest create --id="$TESTNAME" -a program="$HOMEDIR/qm_do.sh" -a arguments="['$file']" -a timeout=30 test command.ExecTest
	done
done
