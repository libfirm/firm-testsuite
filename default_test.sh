. ./helpers.sh

do_test() {
	BASEDIR="`dirname ${file}`"
	if [ -e "$BASEDIR/config" ]; then
		. "$BASEDIR/config"
	fi
	dirprefix=`echo "${BASEDIR}" | sed -e "s/\\//_/"`

	echo "Results for \"$name\"" > "$logfile"
	echo >> "$logfile"

	# build+execute test executable
	echo "*** \"${TEST_COMPILER}\" Compile" >> "$logfile"
	exe_test="$BUILDDIR_TEST/${dirprefix}_$name.exe"
	if [ "$TESTIO" ]; then
		cmd="${TEST_COMPILER} ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} --export-ir && ${TEST_COMPILER} $name.ir ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${exe_test}"
	else
		cmd="${TEST_COMPILER} ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${exe_test}"
	fi
	if execute_cmd "$cmd" "" "COMPILE_RES"; then
		echo "*** \"${TEST_COMPILER}\" Run" >> "$logfile"
		res_test="$OUTPUTDIR/${dirprefix}_${name}_result_test.txt"
		cmd="${exe_test} > $res_test"
		execute_cmd "$cmd" "" "FIRM_RUN_RES"
	fi

	if [ "$FIRM_RUN_RES" != "ok" ]; then
		return 0
	fi

	# compare results
	echo "*** Compare Results" >> "$logfile"
	res_ref="${file}.ref"
	cmd="diff -U100000 $res_test $res_ref > $OUTPUTDIR/${dirprefix}_${name}_result_diff.txt"
	execute_cmd "$cmd" "wrong results" "DIFF_RES" || return 0

	# results are the same, so remove unnecessary files
	rm "$OUTPUTDIR/${dirprefix}_${name}_result_diff.txt"
	mv -f "$OUTPUTDIR/${dirprefix}_${name}_result_test.txt" "$OUTPUTDIR/${dirprefix}_${name}_result.txt"

	return 1
}
