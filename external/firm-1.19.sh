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
patch -p0 < "$TOPDIR/libfirm-1.19.1.patch"
autoreconf
CC=cparser ./configure --prefix=/tmp/firmtest
make $MAKEFLAGS
make install
cd "../cparser-$CPARSERVERSION"
export PKG_CONFIG_PATH="/tmp/firmtest/lib/pkgconfig"
export LD_LIBRARY_PATH="/tmp/firmtest/lib:$LD_LIBRARY_PATH"
make $MAKEFLAGS bootstrap2
