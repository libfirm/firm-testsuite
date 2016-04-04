// RUN: {cc} -target i686-unknown-linux-gnu -integrated-cpp -bdebug=frameinfo -S -o - -O3 -fno-omit-frame-pointer {input} | FileCheck {input} --check-prefix CHECK --check-prefix NORMALFP
// RUN: {cc} -target i686-unknown-linux-gnu -integrated-cpp -bdebug=frameinfo -S -o - -O3 -fomit-frame-pointer {input} | FileCheck {input} --check-prefix CHECK --check-prefix OMITFP

void extfunc(int a);

// CHECK-LABEL: func:
// CHECK: .cfi_startproc
// NORMALFP: .cfi_def_cfa_register 5
// NORMALFP: .cfi_def_cfa_offset 8
// NORMALFP: .cfi_offset 5, -8

// OMITFP: .cfi_def_cfa_register 4
// OMITFP: .cfi_def_cfa_offset 4
// OMITFP: subl $4, %esp
// OMITFP: .cfi_def_cfa_offset 8
// OMITFP: call extfunc
// OMITFP: popl
// OMITFP: .cfi_def_cfa_offset 4

// CHECK: ret
// CHECK: .cfi_endproc
void func(int a, int b) {
	extfunc(a+42-b);
}
