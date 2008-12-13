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

MAXTHREADS=6
VERBOSE=0

while [ "$1" ]; do
	case "$1" in
		-v) shift; VERBOSE=`expr $VERBOSE + 1`;;
		-j) shift; MAXTHREADS=$1; shift;;
		* ) break;;
	esac;
done

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
export TIMEOUT_TEST=10
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

NEXTTHREAD=-1

do_waitandoutput()
{
	local FILE=${Threadfile[$1]}

	curdir="`dirname $FILE`"
	local dirprefix=`echo "${curdir}" | sed -e "s/\\//_/"`
	local name="`basename $FILE .c`"
	local logfile="$OUTPUTDIR/${dirprefix}_$name.log.txt"

	if [ "$curdir" != "$lastdir" ]; then
		if [ "$SHOW_DIR_MARKERS" = "1" ]; then
			showsummary
			echo ">>>> [${COLOR_DIR}$curdir${COLOR_NORMAL}] <<<<"
		fi

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

	echo -n "=$1==> Building $FILE"
	testcount=`expr $testcount + 1`
	wait ${Threads[$1]}
	local STATUS=$?
	if [ $STATUS -eq 1 ]; then
		echo -n "$FAILED "
		cat < $BUILDDIR/makereport_error_$1.txt
		if [ $VERBOSE -ge 1 ]; then
			cat < $logfile
		fi
	else
		okcount=`expr $okcount + 1`
		if [ $VERBOSE -ge 2 ]; then
			cat < $logfile
		else
			echo
		fi
	fi

	cat >> $XMLRES < $BUILDDIR/makereport_res_$NEXTTHREAD.xml
}

do_test()
{
	NEXTTHREAD=`expr $NEXTTHREAD + 1`
	if [ $NEXTTHREAD -eq $MAXTHREADS ]; then NEXTTHREAD=0; fi
	if [ ${Threads[$NEXTTHREAD]} ]
	then
		do_waitandoutput "$NEXTTHREAD"
	fi

	./makereport_par_do.sh "$1" $BUILDDIR/makereport_res_$NEXTTHREAD.xml $BUILDDIR/makereport_error_$NEXTTHREAD.txt &
	Threads[$NEXTTHREAD]=$!
	Threadfile[$NEXTTHREAD]="$1"
}

do_waitforrest()
{
	local LASTTHREAD=$NEXTTHREAD

	while true
	do
		NEXTTHREAD=`expr $NEXTTHREAD + 1`
		if [ $NEXTTHREAD -eq $MAXTHREADS ]; then NEXTTHREAD=0; fi

		if [ ${Threads[$NEXTTHREAD]} ]
		then
			do_waitandoutput "$NEXTTHREAD"
		fi

		if [ $NEXTTHREAD -eq $LASTTHREAD ]; then break; fi
	done
}

ulimit -t ${TIMEOUT_TEST}

lastdir=""
testcount="0"
okcount="0"
completecount="0"
completeok="0"
firstdir=1
for file in $FILES; do
	do_test "$file"
done

do_waitforrest

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

xsltproc --stringparam ref "result-`basename $ECC`-`basename $REF`.xml" --output $OUTPUTDIR/index.html makehtml.xslt $XMLRES

# maybe execute custom actions after result has been generated
[ -e after_compile.sh ] && ./after_compile.sh "$OUTPUTDIR"
