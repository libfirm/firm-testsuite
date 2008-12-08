#!/bin/bash

export LANG=
export LC_ALL=
export LC_COLLATE=
if test "$1" != "--recursive-hack"; then
	"$0" --recursive-hack "$@"
	exit $?
else
	shift
fi

if [ "$ECC" = "" ]; then
	ECC="eccp"
	ECCFLAGS="-v -O3 -ffp-strict"
elif [ `basename "$ECC"` = "cparser" -a "$ECCFLAGS" = "" ]; then
	ECCFLAGS="-v -O3 -ffp-strict"
fi
export TEST_COMPILER="$ECC"
export TEST_CFLAGS="${ADDCFLAGS} ${ECCFLAGS} -std=c99"
if [ "$REF" = "" ]; then
	REF="icc -restrict"
	REFFLAGS="-fp-model precise"
elif [ `basename "$REF"` = "gcc" -a "$REFFLAGS" = "" ]; then
	REFFLAGS="-ffloat-store"
fi
export REF_COMPILER="$REF"
export REF_CFLAGS="${REFFLAGS} -fomit-frame-pointer -Itcc -std=c99"
export LINKFLAGS="-lm"
export TIMEOUT_TEST=300
export DEFAULT_DIRS="backend opt C C/pragmatic C/should_fail C/gnu99 ack langshootout llvm"
export ALL_CFLAGS=""

export OUTPUTDIR="reports/stats-`date +%y.%m.%d`"
export BUILDDIR="build"
export BUILDDIR_TEST="$BUILDDIR/firm"
export BUILDDIR_REF="$BUILDDIR/gcc"
export ESC=""
export COLOR_FAILED="$ESC[1;31m"
export COLOR_NORMAL="$ESC[0m"
export COLOR_DIR="$ESC[32m"
export COLOR_RESULT="$ESC[1m"
export FAILED=" ... ${COLOR_FAILED}FAILED${COLOR_NORMAL}"

mkdir -p "$BUILDDIR_TEST"
mkdir -p "$BUILDDIR_REF"
mkdir -p "$OUTPUTDIR"

XMLRES=$OUTPUTDIR/result.xml
cat > $XMLRES << __END__
<?xml version="1.0"?>
<results>
    <datetime>`date "+%Y-%m-%d %T"`</datetime>
    <environment>
        <TEST_COMPILER>${TEST_COMPILER}</TEST_COMPILER>
        <TEST_CFLAGS>${TEST_CFLAGS}</TEST_CFLAGS>
        <REF_COMPILER>${REF_COMPILER}</REF_COMPILER>
        <REF_CFLAGS>${REF_CFLAGS}</REF_CFLAGS>
    </environment>
__END__

SHOW_DIR_MARKERS=0
if [ -z "$1" ]; then
	DIRS="$DEFAULT_DIRS"
else
	for f in "$@"; do
		if test -d "$f"; then
			DIRS="$DIRS $f"
		else
			FILES="$FILES $f"
		fi
	done
fi
for d in $DIRS; do
	for f in $d/*.c; do
		FILES="$FILES $f"
		SHOW_DIR_MARKERS=1
	done
done

showsummary() {
	if [ "$SHOW_DIR_MARKERS" = "1" -a "$testcount" != "0" ]; then
		failcount=`expr $testcount - $okcount`
		echo "---------------------------"
		echo "${COLOR_RESULT} $failcount/$testcount tests failed${COLOR_NORMAL}"
		echo ""
	fi
	completecount=`expr $completecount + $testcount`
	completeok=`expr $completeok + $okcount`
}

ulimit -t ${TIMEOUT_TEST}

lastdir=""
testcount="0"
okcount="0"
completecount="0"
completeok="0"
firstdir=1
for file in $FILES; do
	curdir="`dirname $file`"
	if [ "$SHOW_DIR_MARKERS" = "1" -a "$curdir" != "$lastdir" ]; then
		showsummary
		echo ">>>> [${COLOR_DIR}$curdir${COLOR_NORMAL}] <<<<"

		if [ $firstdir == 1 ]; then
			firstdir=0
		else
			echo "</dir>" >> $XMLRES
		fi
	    echo "<dir name=\"$curdir\">" >> $XMLRES

		lastdir="$curdir"
		testcount="0"
		okcount="0"
	fi

    testcount=`expr $testcount + 1`
	export file
    export name="`basename $file .c`"
    export logfile="$OUTPUTDIR/${name}.log.txt"
    export FILE_FLAGS=`awk '/\/\\*\\$ .* \\$\\*\// { for (i = 2; i < NF; ++i) printf "%s ", $i }' $file`
    echo -n "Building $file"

	rm -f "$logfile"
	export CFLAGS="$ALL_CFLAGS -I$curdir"
	CMD="./default_test.sh"

	if test -x $curdir/test.sh; then
		CMD="$curdir/test.sh"
	fi

    # initialize variables
    GCC_RES=""
    GCC_RUN_RES=""
    COMPILE_RES=""
    FIRM_RUN_RES=""
    DIFF_RES=""

	. $CMD
	if do_test; then
		echo -n "$FAILED $ERROR"
	else
		okcount=`expr $okcount + 1`
	fi
    echo

    cat >> $XMLRES << __END__
    <result name="$name">
        <compile>$COMPILE_RES</compile>
        <link>$LINK_RES</link>
        <gcc_compile>$GCC_RES</gcc_compile>
        <gcc_run>$GCC_RUN_RES</gcc_run>
        <firm_run>$FIRM_RUN_RES</firm_run>
        <diff>$DIFF_RES</diff>
    </result>
__END__
done

if [ $firstdir == 0 ]; then
	echo "</dir>" >> $XMLRES
fi
showsummary

cat >> $XMLRES << __END__
    <summary>
        <total>$completecount</total>
        <failed>`expr $completecount - $completeok`</failed>
    </summary>
</results>
__END__

testcount="$completecount"
okcount="$completeok"
showsummary

xsltproc --output $OUTPUTDIR/index.html makehtml.xslt $XMLRES

# maybe execute custom actions after result has been generated
[ -e after_compile.sh ] && ./after_compile.sh "$OUTPUTDIR"
