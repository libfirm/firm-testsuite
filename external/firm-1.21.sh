#!/bin/sh
#
# Test libfirm (bootstrap)
set -e

. "$(dirname "$0")/utils.sh"

FIRMVERSION="1.21.0"
grab "http://switch.dl.sourceforge.net/sourceforge/libfirm/libfirm-$FIRMVERSION.tar.bz2"
CPARSERVERSION="0.9.14"
grab "http://switch.dl.sourceforge.net/sourceforge/cparser/cparser-$CPARSERVERSION.tar.bz2"
cd "$BUILDDIR"
echo "Extracting..."
tar -xf "$PACKAGEDIR/libfirm-$FIRMVERSION.tar.bz2"
tar -xf "$PACKAGEDIR/cparser-$CPARSERVERSION.tar.bz2"
cd "libfirm-$FIRMVERSION"
TEMPINSTALLPATH="/tmp/firmtest"
rm -rf "$TEMPINSTALLPATH"
CC=cparser LFLAGS="-m32" CFLAGS="-O2 -m32" ./configure "--prefix=$TEMPINSTALLPATH"
make $MAKEFLAGS
make install
cd "../cparser-$CPARSERVERSION"
sed -e 's/-O0/-O1/g' -i Makefile # cparser fails on -O0 :-(
export PKG_CONFIG_PATH="$TEMPINSTALLPATH/lib/pkgconfig"
export LD_LIBRARY_PATH="$TEMPINSTALLPATH/lib:$LD_LIBRARY_PATH"
CC=cparser LFLAGS="-m32" CPPFLAGS="-m32" CFLAGS="-O2 -m32" make $MAKEFLAGS bootstrap2
