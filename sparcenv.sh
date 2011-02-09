#!/bin/sh

TARGET="sparc-linux-gnu-"
export CPARSER_AS="${TARGET}as"
export CPARSER_PP="${TARGET}gcc -E"
export CPARSER_LINK="${TARGET}gcc -static"
export ECC="cparser"
export ECCFLAGS="-bisa=sparc -O3"
export RUNEXE="qemu-sparc "
export ADDCFLAGS="-bisa=sparc"
