trap true SIGABRT
exe_test="$BUILDDIR_TEST/$name.exe"
cmd="${TEST_COMPILER} ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${exe_test}"
#we should fail when the compilation went ok
command /bin/bash -c "$cmd" >> "$logfile" 2>&1
RES="$?"
if test "$RES" = "0" -o "$RES" -gt 128; then
	if test "$RES" -gt 128; then
		echo "segfault"
	fi
	exit 1
fi
