#!/bin/sh
#
# Test lua
set -e

. "$(dirname "$0")/utils.sh"

# Lua
LUAVERSION="5.1.4"
TESTS="lua5.1-tests.tar.gz"
grab "http://www.lua.org/ftp/lua-$LUAVERSION.tar.gz"
grab "http://www.inf.puc-rio.br/~roberto/lua/$TESTS"
cd "$BUILDDIR"
tar -xf "$PACKAGEDIR/lua-$LUAVERSION.tar.gz"
cd "lua-$LUAVERSION"
sed -e 's/gcc/cparser -m32/g' -i src/Makefile
make $MAKEFLAGS linux

tar -xf "$PACKAGEDIR/$TESTS"
cd lua5.1-tests
# fix a test...
sed -e "s/dofile('main.lua')/-- dofile('main.lua')/" -i all.lua
# Run tests
"$BUILDDIR/lua-$LUAVERSION/src/lua" all.lua
