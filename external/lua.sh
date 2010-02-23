#!/bin/bash
#
# Test lua

. `dirname "$0"`/utils.sh || exit 1

# Lua
LUAVERSION="5.1.4"
TESTS="lua5.1-tests.tar.gz"
grab "http://www.lua.org/ftp/lua-$LUAVERSION.tar.gz"
grab "http://www.inf.puc-rio.br/~roberto/lua/$TESTS"
pushd $BUILDDIR > /dev/null
tar -xf "$PACKAGEDIR/lua-$LUAVERSION.tar.gz"
cd lua-$LUAVERSION
sed -e 's/gcc/cparser/g' -i src/Makefile || exit 1
make $MAKEFLAGS linux || exit 1
popd > /dev/null
pushd $BUILDDIR > /dev/null
tar -xf "$PACKAGEDIR/$TESTS"
cd lua5.1-tests
# fix a test...
sed -e "s/dofile('main.lua')/-- dofile('main.lua')/" -i all.lua
# Run tests
$BUILDDIR/lua-$LUAVERSION/src/lua all.lua
popd > /dev/null
