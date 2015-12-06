#!/bin/sh
#
# Test libfirm (bootstrap)
set -eu

. "$(dirname "$0")/utils.sh"

FIRMVERSION="1.22.0"
grab "http://XXX/libfirm-$FIRMVERSION.tar.bz2" "MD5"
CPARSERVERSION="1.22.0"
grab "http://XXX/cparser-$CPARSERVERSION.tar.bz2" "MD5"

doit() {
	SUBBUILDDIR="$1"
	cd "$BUILDDIR"
	echo "Extracting..."
	tar -xf "$PACKAGEDIR/libfirm-$FIRMVERSION.tar.bz2"
	tar -xf "$PACKAGEDIR/cparser-$CPARSERVERSION.tar.bz2"
	cd "libfirm-$FIRMVERSION"
	mkdir $SUBBUILDDIR
	cd $SUBBUILDDIR
	cmake $CMAKE_FLAGS ..
	ninja
	ninja install
	cd "../../cparser-$CPARSERVERSION"
	mkdir $SUBBUILDDIR
	cd $SUBBUILDDIR
	cmake $CMAKE_FLAGS ..
	ninja
	ninja install
}

TEMPINSTALLPATH1="/tmp/firmtest32"
rm -rf "$TEMPINSTALLPATH1"
CMAKE_FLAGS="-GNinja -DCMAKE_C_COMPILER=$(which cparser) -DCMAKE_INSTALL_PREFIX=$TEMPINSTALLPATH1 -DCMAKE_PREFIX_PATH=$TEMPINSTALLPATH1 -DCMAKE_C_FLAGS=-m32 -DCMAKE_EXE_LINKER_FLAGS=-m32"
doit build32

TEMPINSTALLPATH0="/tmp/firmtest64"
rm -rf "$TEMPINSTALLPATH0"
CMAKE_FLAGS="-GNinja -DCMAKE_C_COMPILER=$(which cparser) -DCMAKE_INSTALL_PREFIX=$TEMPINSTALLPATH0 -DCMAKE_PREFIX_PATH=$TEMPINSTALLPATH0"
doit build64

echo "Please test if $TEMPINSTALLPATH0/bin/cparser and $TEMPINSTALLPATH1/bin/cparser work as expected"
