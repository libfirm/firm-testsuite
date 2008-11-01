. helpers.sh

# build+execute test executable
exe_test="$BUILDDIR_TEST/$name.exe"
cmd="${TEST_COMPILER} ${file} ${TEST_CFLAGS} ${CFLAGS} ${FILE_FLAGS} ${LINKFLAGS} -o ${exe_test}"
execute_cmd "$cmd"

res_test="$BUILDDIR_TEST/${name}_result_test.txt"
cmd="${exe_test} >& $res_test"
execute_cmd "$cmd"

# build+execute reference executable
exe_ref="$BUILDDIR_REF/$name.exe"
cmd="${REF_COMPILER} ${REF_CFLAGS} ${CFLAGS} ${file} ${LINKFLAGS} -o ${exe_ref}"
execute_cmd "$cmd" "reference compiler failed"

res_ref="$BUILDDIR_REF/${name}_result_ref.txt"
cmd="${exe_ref} >& $res_ref"
execute_cmd "$cmd" "reference executable failed"

# compare results
cmd="diff -U100000 $res_test $res_ref > $OUTPUTDIR/${name}.diff.txt"
execute_cmd "$cmd"
