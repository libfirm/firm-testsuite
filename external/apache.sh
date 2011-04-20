#!/bin/bash
set -e

. `dirname "$0"`/utils.sh

APACHEVERSION="2.2.17"
grab "http://ftp-stud.hs-esslingen.de/pub/Mirrors/ftp.apache.org/dist/httpd/httpd-$APACHEVERSION.tar.bz2"
pushd $BUILDDIR > /dev/null
echo "Extracting..."
tar -xf "$PACKAGEDIR/httpd-$APACHEVERSION.tar.bz2"
cd "httpd-$APACHEVERSION"
CC=cparser ./configure --prefix=/tmp/apachetest
make $MAKEFLAGS
popd > /dev/null
