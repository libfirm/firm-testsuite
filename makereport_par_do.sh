#!/bin/sh

file="$1"
xmlresult="$2"
errorfile="$3"

dir="`dirname $file`"
name="`basename $file .c`"
dirprefix=`echo "${dir}" | sed -e "s/\\//_/"`
unique_name="${dirprefix}_${name}"
logfile="$OUTPUTDIR/${dirprefix}_$name.log.txt"
FILE_FLAGS="`awk '/\/\\*\\$ .* \\$\\*\// { for (i = 2; i < NF; ++i) printf "%s ", $i }' $file`"

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
ERROR=""

. $CMD
if ! do_test; then
	echo "$ERROR" > $errorfile
	res=1
else
	res=0
fi

cat > $xmlresult << __END__
    <result id="${unique_name}" name="${dir}/${name}" sourcefile="${file}" logfile="`basename ${logfile}`" ok="`expr 1 - $res`" error="$ERROR"/>
__END__

exit $res
