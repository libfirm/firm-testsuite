#!/bin/sh

TARGET="arm-linux-gnu-"
export CPARSER_AS="${TARGET}as"
export CPARSER_PP="${TARGET}gcc -E"
export CPARSER_LINK="${TARGET}gcc -static"
export ECC="cparser"
export ECCFLAGS="-bisa=arm -O3"
export RUNEXE="qemu-arm "
