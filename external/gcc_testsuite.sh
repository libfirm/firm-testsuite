#!/bin/sh
set -e

. "$(dirname "$0")/utils.sh"

GCC_VERSION="4.4.0"
grab "ftp://ftp.mpi-sb.mpg.de/pub/gnu/mirror/gcc.gnu.org/pub/gcc/releases/gcc-$GCC_VERSION/gcc-testsuite-$GCC_VERSION.tar.bz2"
cd "$BUILDDIR"
tar -xf "$PACKAGEDIR/gcc-testsuite-$GCC_VERSION.tar.bz2"
cd "gcc-$GCC_VERSION/gcc/testsuite"

# SKIP these tests because they run very long (firm perfomance bug)
SKIP="20001226-1.c"

# Check compile tests (should just compile without error/abort)
cd gcc.c-torture/compile

rm $SKIP

for i in *.c; do
	echo "$i"
	if ! cparser -O3 -S -o/tmp/blup.s "$i" > /dev/null 2>&1; then
		echo "Error reported"
	fi
done
