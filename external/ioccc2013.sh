#!/bin/sh
set -e

. "$(dirname "$0")/utils.sh"

TOPDIR="$(pwd)"
grab "http://www.ioccc.org/2013/2013.tar.bz2" c959482b20435493b74cde38880783c2

cd "$BUILDDIR"
rm -rf ioccc2013
tar -xf "$PACKAGEDIR/2013.tar.bz2"
mv 2013 ioccc2013
cd ioccc2013
patch -p0 < "$TOPDIR/ioccc2013.patch"
CC="cparser -m32" make

#cd "$TOPDIR/ioccc2013_tests"
#./testit.sh
