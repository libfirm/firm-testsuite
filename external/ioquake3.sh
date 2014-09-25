#!/bin/bash

# Note: that on ubuntu/debian you probably have to patch sdl-config and
# create a bunch of .so file symlinks in order to have this build on a
# x86_64 host with -m32 target.

set -e
. "$(dirname "$0")/utils.sh"

checkout "svn://svn.icculus.org/quake3/branches/1.36/" 1522 "ioquake3"

cd "$BUILDDIR"
cp -rp "$PACKAGEDIR/ioquake3" .
cd ioquake3
patch -p0 < "$TOPDIR/ioquake3.patch"
ARCH=i386 CC=cparser make Q=
# IPD specific...
cd build/release-linux-i386/
ln -s /afs/info.uni-karlsruhe.de/public/tools/g/q3/baseq3/*.pk3 baseq3
cd -
