# Compile, run and check outputs of a single test
#
# Expects the following environment variables to be set:
#   file: input sourcefile
#   logfile
#   TESTIO
#   TEST_COMPILER
#   TEST_CFLAGS
#   CFLAGS
#   FILE_FLAGS
#   LINKFLAGS
#   OUTPUTDIR
#   BUILDDIR
#   RUNEXE

. ./helpers.sh

do_test() {
	BASEDIR="`dirname ${file}`"
	name="`basename $file .c`"
	if [ -e "$BASEDIR/config" ]; then
		. "$BASEDIR/config"
	fi
	dirprefix=`echo "${BASEDIR}" | sed -e "s/\\//_/"`

	echo "Results for \"$name\"" > "$logfile"
	echo >> "$logfile"

	# build+execute test executable
	echo "*** \"${TEST_COMPILER}\" Compile" >> "$logfile"
	exe_test="$BUILDDIR/${dirprefix}_$name.exe"
	if [ "$TESTIO" ]; then
		cmd="${TEST_COMPILER} ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} --export-ir && ${TEST_COMPILER} $name.ir ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${exe_test}"
	else
		cmd="${TEST_COMPILER} ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${exe_test}"
	fi
	if ! execute_cmd "$cmd" ""; then
		return 1
	fi

	echo "*** \"${TEST_COMPILER}\" Run" >> "$logfile"
	res_test="$OUTPUTDIR/${dirprefix}_${name}_result_test.txt"
	cmd="${RUNEXE}${exe_test} > $res_test"
	if ! execute_cmd "$cmd" ""; then
		return 1
	fi

	# compare results
	echo "*** Compare Results" >> "$logfile"
	res_ref="${file}.ref"
	cmd="diff -U100000 $res_test $res_ref > $OUTPUTDIR/${dirprefix}_${name}_result_diff.txt"
	execute_cmd "$cmd" "wrong results" || return 1

	# results are the same, so remove unnecessary files
	rm "$OUTPUTDIR/${dirprefix}_${name}_result_diff.txt"
	mv -f "$OUTPUTDIR/${dirprefix}_${name}_result_test.txt" "$OUTPUTDIR/${dirprefix}_${name}_result.txt"

	# Some tests have custom rules that check the assembly output
	check_file="${file}.check"
	if [ -e "$check_file" ]; then
		chmod +x "$check_file" # just to be sure

		output_asm="$BUILDDIR/${dirprefix}_${name}.s"
		# build again
		cmd="${TEST_COMPILER} -S ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${output_asm}"
		echo "*** \"${TEST_COMPILER}\" Compile 2" >> "$logfile"
		if execute_cmd "$cmd" ""; then
			echo "*** \"${TEST_COMPILER}\" Custom Check:" >> "$logfile"
			cmd="${check_file} ${output_asm}"
			if ! execute_cmd "$cmd" ""; then
				return 1
			fi
		fi
	fi

	return 0
}
