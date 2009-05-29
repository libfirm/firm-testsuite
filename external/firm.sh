#!/bin/bash
#
# Test libfirm (bootstrap)

. `dirname "$0"`/utils.sh || exit 1

FIRMVERSION="1.17.0"
grab "http://switch.dl.sourceforge.net/sourceforge/libfirm/libfirm-$FIRMVERSION.tar.bz2"
pushd $BUILDDIR > /dev/null
echo "Extracting..."
tar -xf "$PACKAGEDIR/libfirm-$FIRMVERSION.tar.bz2"
cd "libfirm-$FIRMVERSION"
CC=cparser ./configure --prefix=/tmp/firmtest
make $MAKEFLAGS
popd > /dev/null
