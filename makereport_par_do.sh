#!/bin/bash

file="$1"
xmlresult="$2"
errorfile="$3"

dir="`dirname $file`"
name="`basename $file .c`"
dirprefix=`echo "${dir}" | sed -e "s/\\//_/"`
logfile="$OUTPUTDIR/${dirprefix}_$name.log.txt"
FILE_FLAGS=`awk '/\/\\*\\$ .* \\$\\*\// { for (i = 2; i < NF; ++i) printf "%s ", $i }' $file`

rm -f "$logfile"
CFLAGS="$ALL_CFLAGS -I$dir"
CMD="./default_test.sh"

if test -x $dir/test.sh; then
	CMD="$dir/test.sh"
fi

# initialize variables
COMPILE_RES=""
FIRM_RUN_RES=""
GCC_RES=""
GCC_RUN_RES=""
DIFF_RES=""

. $CMD
if do_test; then
	echo "$ERROR" > $errorfile
	res=1
else
	res=0
fi

cat > $xmlresult << __END__
    <result name="$name">
        <compile>$COMPILE_RES</compile>
        <firm_run>$FIRM_RUN_RES</firm_run>
        <gcc_compile>$GCC_RES</gcc_compile>
        <gcc_run>$GCC_RUN_RES</gcc_run>
        <diff>$DIFF_RES</diff>
    </result>
__END__

exit $res
