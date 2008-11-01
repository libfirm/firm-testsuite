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
fi
export TEST_COMPILER="$ECC"
export TEST_CFLAGS="${ADDCFLAGS} -v -O3 -ffp-strict"
export REF_COMPILER="icc -restrict"
export REF_CFLAGS="-fomit-frame-pointer -Itcc -fp-model precise"
export LINKFLAGS="-lm"
export TIMEOUT_TEST=30
export DEFAULT_DIRS="backend opt C C/should_fail ack langshootout llvm"
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
    <environment>
        <ECC_CFLAGS>${ECC_CFLAGS}</ECC_CFLAGS>
        <GCC_CFLAGS>${GCC_CFLAGS}</GCC_CFLAGS>
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
for file in $FILES; do
	curdir="`dirname $file`"
	if [ "$SHOW_DIR_MARKERS" = "1" -a "$curdir" != "$lastdir" ]; then
		showsummary
		echo ">>>> [${COLOR_DIR}$curdir${COLOR_NORMAL}] <<<<"

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

	if ! $CMD > /tmp/message; then
		echo -n "$FAILED `cat /tmp/message`"
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

echo "</results>" >> $XMLRES

showsummary
testcount="$completecount"
okcount="$completeok"
showsummary

xsltproc --output $OUTPUTDIR/index.html makehtml.xslt $XMLRES

# maybe execute custom actions after result has been generated
[ -e after_compile.sh ] && ./after_compile.sh "$OUTPUTDIR"
