#!/bin/sh
#
# Helper functions for testing stuff
set -e

TOPDIR="$(dirname $0)"
cd "$TOPDIR"
TOPDIR="$(pwd)"
cd -

PACKAGEDIR="$TOPDIR/packages"
BUILDDIR="$TOPDIR/build"

mkdir -p "$PACKAGEDIR"

grab() {
	URL="$1"
	MD5="$2"
	FILENAME="$(basename "$URL")"
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
rm -fr "$BUILDDIR"
mkdir -p "$BUILDDIR"
