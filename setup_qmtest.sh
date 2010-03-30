#!/bin/sh
#
# Create qmtest test-database from firm testsuite
qmtest create-tdb
DIRS="backend x86code opt C C/pragmatic C/should_fail C/gnu99 ack langshootout llvm"
ME="`readlink -f "$0"`"
HOMEDIR="`dirname "$ME"`"
for dir in $DIRS; do
	for file in $dir/*.c; do
		echo "File: $file"
		name="`basename "$file" .c`"
		qmtest create --id="$dir.$name" -a program="$HOMEDIR/qm_do.sh" -a arguments="['$file']" -a timeout=45 test command.ExecTest
	done
done
