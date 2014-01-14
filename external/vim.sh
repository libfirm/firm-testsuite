#!/bin/sh
#
# Test vim
set -e

. "$(dirname "$0")/utils.sh"

# Vim
VIMVERSION="7.2"
VIMVERSIONSHORT="72"
grab "ftp://ftp.vim.org/pub/vim/unix/vim-$VIMVERSION.tar.bz2"
cd "$BUILDDIR"
echo "Extracting..."
tar -xf "$PACKAGEDIR/vim-$VIMVERSION.tar.bz2"
cd "vim$VIMVERSIONSHORT"
CC=cparser CFLAGS="-O2 -m32" LDFLAGS="-m32" ./configure --prefix=/tmp/vimtest --disable-gtk-check --disable-gtk2-check --disable-gnome-check --disable-motif-check --disable-athena-check --disable-nextaw-check --disable-carbon-check --disable-gpm --disable-nls --disable-acl
make $MAKEFLAGS
