do_test() {
    trap true SIGABRT
    BASEDIR="`dirname ${file}`"
    dirprefix=`echo "${BASEDIR}" | sed -e "s/\\//_/"`

    exe_test="$BUILDDIR_TEST/${dirprefix}_$name.exe"
    cmd="${TEST_COMPILER} ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${exe_test}"
    #we should fail when the compilation went ok
    echo "Command: $CMD" >> "$logfile"
    command /bin/bash -c "$cmd" >> "$logfile" 2>&1
    RES="$?"
    echo >> "$logfile"
    if test "$RES" = "0" -o "$RES" -gt 128; then
    	if test "$RES" -gt 128; then
    		ERROR="aborted"
            COMPILE_RES="aborted"
        else
            COMPILE_RES="failed"
    	fi
    	return 0
    fi
    COMPILE_RES="ok"
    return 1
}
