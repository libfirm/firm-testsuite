#!/bin/csh
#
gcc -c paranoia.c >& compiler.txt
if ( $status != 0 ) then
  echo "Errors compiling paranoia.c"
  exit
endif
rm compiler.txt
#
gcc paranoia.o -lm
if ( $status != 0 ) then
  echo "Errors linking paranoia.o"
  exit
endif
#
rm paranoia.o
mv a.out ~/binc/$ARCH/paranoia
#
echo "Executable installed as ~/binc/$ARCH/paranoia"
