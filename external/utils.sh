#!/bin/sh
#
# Helper functions for testing stuff

TOPDIR="`dirname $0`"
pushd $TOPDIR > /dev/null
TOPDIR="`pwd`"
popd > /dev/null

PACKAGEDIR=$TOPDIR/packages
BUILDDIR=$TOPDIR/build

mkdir -p $PACKAGEDIR

grab() {
	URL="$1"
	MD5="$2"
	FILENAME="`basename "$URL"`"
	DESTFILE="$PACKAGEDIR/$FILENAME"

	if ! [ -e "$DESTFILE" ]; then
		wget -O "$DESTFILE" "$URL"
	else
		echo "Already have $DESTFILE"
	fi
}

MAKEFLAGS=-j2

# Cleanup builddir
echo "Cleanup $BUILDDIR"
mkdir -p "$BUILDDIR" || exit 1
rm -rf "$BUILDDIR/*" || exit 1
