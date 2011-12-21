#!/bin/sh
#
# Test libfirm (bootstrap)
set -e

. "$(dirname "$0")/utils.sh"

FIRMVERSION="1.20.0"
grab "http://switch.dl.sourceforge.net/sourceforge/libfirm/libfirm-$FIRMVERSION.tar.bz2"
CPARSERVERSION="0.9.13"
grab "http://switch.dl.sourceforge.net/sourceforge/cparser/cparser-$CPARSERVERSION.tar.bz2"
cd "$BUILDDIR"
echo "Extracting..."
tar -xf "$PACKAGEDIR/libfirm-$FIRMVERSION.tar.bz2"
tar -xf "$PACKAGEDIR/cparser-$CPARSERVERSION.tar.bz2"
cd "libfirm-$FIRMVERSION"
TEMPINSTALLPATH="/tmp/firmtest"
rm -rf "$TEMPINSTALLPATH"
CC=cparser ./configure "--prefix=$TEMPINSTALLPATH"
make $MAKEFLAGS
make install
cd "../cparser-$CPARSERVERSION"
export PKG_CONFIG_PATH="$TEMPINSTALLPATH/lib/pkgconfig"
export LD_LIBRARY_PATH="$TEMPINSTALLPATH/lib:$LD_LIBRARY_PATH"
make $MAKEFLAGS bootstrap2
