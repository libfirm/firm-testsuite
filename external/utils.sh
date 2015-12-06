#!/bin/sh
#
# Helper functions for testing stuff
set -eu

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

checkout() {
	URL="$1"
	REV="$2"
	DIRNAME="$3"
	DESTFILE="$PACKAGEDIR/$DIRNAME"

	if ! [ -e "$DESTFILE" ]; then
		cd "$PACKAGEDIR"
		svn co -r "$REV" "$URL" "$DIRNAME"
	else
		echo "Already have $DESTFILE, updating"
		cd "$PACKAGEDIR"
		svn up -r "$REV"
	fi
}

MAKEFLAGS=-j3

# Cleanup builddir
echo "Cleanup $BUILDDIR"
rm -rf "$BUILDDIR"/*
mkdir -p "$BUILDDIR"
