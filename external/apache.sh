#!/bin/sh
set -e

. "$(dirname "$0")/utils.sh"

APACHEVERSION="2.2.21"
grab "http://ftp-stud.hs-esslingen.de/pub/Mirrors/ftp.apache.org/dist/httpd/httpd-$APACHEVERSION.tar.bz2"
cd "$BUILDDIR"
echo "Extracting..."
tar -xf "$PACKAGEDIR/httpd-$APACHEVERSION.tar.bz2"
cd "httpd-$APACHEVERSION"
CFLAGS="-m32 -O2" LDFLAGS="-m32" CC=cparser ./configure --with-included-apr --prefix=/tmp/apachetest
make $MAKEFLAGS
