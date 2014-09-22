#!/bin/sh
#
# Test libfirm (bootstrap)
set -e

. "$(dirname "$0")/utils.sh"

FIRMVERSION="1.19.1"
grab "http://switch.dl.sourceforge.net/sourceforge/libfirm/libfirm-$FIRMVERSION.tar.bz2"
CPARSERVERSION="0.9.12"
grab "http://switch.dl.sourceforge.net/sourceforge/cparser/cparser-$CPARSERVERSION.tar.bz2"
cd "$BUILDDIR"
echo "Extracting..."
tar -xf "$PACKAGEDIR/libfirm-$FIRMVERSION.tar.bz2"
tar -xf "$PACKAGEDIR/cparser-$CPARSERVERSION.tar.bz2"
cd "libfirm-$FIRMVERSION"
patch -p1 < "$TOPDIR/libfirm-1.19.1.patch"
autoreconf -i
CC=cparser CFLAGS="-O2 -m32" LFLAGS="-m32" ./configure --prefix=/tmp/firmtest
make $MAKEFLAGS
make install
cd "../cparser-$CPARSERVERSION"
sed -e 's/-O0/-O1/g' -i Makefile # cparser fails on -O0 :-(
export PKG_CONFIG_PATH="/tmp/firmtest/lib/pkgconfig"
export LD_LIBRARY_PATH="/tmp/firmtest/lib:$LD_LIBRARY_PATH"
CC=cparser CPPFLAGS="-m32" CFLAGS="-O2 -m32" LFLAGS="-m32" make $MAKEFLAGS bootstrap2
