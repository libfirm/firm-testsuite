#!/bin/sh
#
# Test libfirm (bootstrap)
set -e

. "$(dirname "$0")/utils.sh"

FIRMVERSION="1.17.0"
grab "http://switch.dl.sourceforge.net/sourceforge/libfirm/libfirm-$FIRMVERSION.tar.bz2"
CPARSERVERSION="0.9.9"
grab "http://switch.dl.sourceforge.net/sourceforge/cparser/cparser-$CPARSERVERSION.tar.bz2"
cd "$BUILDDIR"
echo "Extracting..."
tar -xf "$PACKAGEDIR/libfirm-$FIRMVERSION.tar.bz2"
tar -xf "$PACKAGEDIR/cparser-$CPARSERVERSION.tar.bz2"
cd "libfirm-$FIRMVERSION"
CC=cparser LFLAGS="-m32" CFLAGS="-O2 -m32" ./configure --prefix=/tmp/firmtest
# patch out -Werror
make $MAKEFLAGS
make install
cd "../cparser-$CPARSERVERSION"
sed -e 's/-Werror//g' -i Makefile
# cparser fails on -O0 :-(
sed -e 's/-O0/-O1/g' -i Makefile
export PKG_CONFIG_PATH="/tmp/firmtest/lib/pkgconfig"
export LD_LIBRARY_PATH="/tmp/firmtest/lib:$LD_LIBRARY_PATH"
CC=cparser LFLAGS="-m32" CFLAGS="-O2 -m32" make $MAKEFLAGS bootstrap2
