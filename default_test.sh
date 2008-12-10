. helpers.sh

do_test() {
	BASEDIR="`dirname ${file}`"
	if [ -e "$BASEDIR/config" ]; then
		. "$BASEDIR/config"
	fi
	dirprefix=`echo "${BASEDIR}" | sed -e "s/\\//_/"`

	echo "Results for \"$name\"" > "$logfile"
	echo >> "$logfile"

	# build+execute reference executable
	echo "*** \"${REF_COMPILER}\" Compile" >> "$logfile"
	exe_ref="$BUILDDIR_REF/${dirprefix}_$name.exe"
	cmd="${REF_COMPILER} ${REF_CFLAGS} ${CFLAGS} ${file} ${LINKFLAGS} -o ${exe_ref}"
	if execute_cmd "$cmd" "reference compiler failed" "GCC_RES"; then
		echo "*** \"${REF_COMPILER}\" Run" >> "$logfile"
		res_ref="$BUILDDIR_REF/${dirprefix}_${name}_result_ref.txt"
		cmd="${exe_ref} >& $res_ref"
		execute_cmd "$cmd" "reference executable failed" "GCC_RUN_RES"
	fi


	# build+execute test executable
	echo "*** \"${TEST_COMPILER}\" Compile" >> "$logfile"
	exe_test="$BUILDDIR_TEST/${dirprefix}_$name.exe"
	cmd="${TEST_COMPILER} ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${exe_test}"
	if execute_cmd "$cmd" "" "COMPILE_RES"; then
		echo "*** \"${TEST_COMPILER}\" Run" >> "$logfile"
		res_test="$BUILDDIR_TEST/${dirprefix}_${name}_result_test.txt"
		cmd="${exe_test} >& $res_test"
		execute_cmd "$cmd" "" "FIRM_RUN_RES"
	fi

	if [ "$GCC_RUN_RES" != "ok" -o "$FIRM_RUN_RES" != "ok" ]; then
		return 0
	fi

	# compare results
	echo "*** Compare Results" >> "$logfile"
	cmd="diff -U100000 $res_test $res_ref > $OUTPUTDIR/${dirprefix}_${name}.diff.txt"
	execute_cmd "$cmd" "" "DIFF_RES" || return 0

	return 1
}
