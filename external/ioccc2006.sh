#!/bin/sh
set -e

. "$(dirname "$0")/utils.sh"

TOPDIR="$(pwd)"
grab "http://www.ioccc.org/2006/2006.tar.gz"

cd "$BUILDDIR"
rm -rf ioccc2006
tar -xf "$PACKAGEDIR/2006.tar.gz"
mv 2006 ioccc2006
cd ioccc2006
patch -p0 < "$TOPDIR/ioccc2006.patch"
CC="cparser -m32" make

cd "$TOPDIR/ioccc2006_tests"
./testit.sh
