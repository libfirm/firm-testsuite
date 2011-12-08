#!/bin/bash

set -e
. "$(dirname "$0")/utils.sh"

checkout "svn://svn.icculus.org/quake3/branches/1.36/" 1522 "ioquake3"

cd "$BUILDDIR"
cp -rp "$PACKAGEDIR/ioquake3" .
cd ioquake3
patch -p0 < "$TOPDIR/ioquake3.patch"
CC=cparser make Q=
# IPD specific...
cd build/release-linux-i386/
ln -s /afs/info.uni-karlsruhe.de/public/tools/g/q3/baseq3/*.pk3 baseq3
cd -
