// RUN: {cc} -target i686-linux-gnu {input} -integrated-cpp -S -o - | FileCheck {input} --check CHECK --check IA32_LINUX
// RUN: {cc} -target i686-apple-darwin {input} -integrated-cpp -S -o - | FileCheck {input} --check CHECK --check IA32_DARWIN
// RUN: {cc} -target i686-pc-mingw32 {input} -integrated-cpp -S -o - | FileCheck {input} --check CHECK --check IA32_MINGW
// RUN: {cc} -target x86_64-linux-gnu {input} -integrated-cpp -S -o - | FileCheck {input} --check CHECK --check X86_64
// RUN: {cc} -target x86_64-apple-darwin {input} -integrated-cpp -S -o - | FileCheck {input} --check CHECK --check X86_64
// RUN: {cc} -target sparc-leon-linux-gnu {input} -integrated-cpp -S -o - | FileCheck {input} --check CHECK --check OTHERS
// RUN: {cc} -target arm-unknown-linux-gnu {input} -integrated-cpp -S -o - | FileCheck {input} --check CHECK --check OTHERS
// RUN: {cc} -target mips-unknown-linux-gnu {input} -integrated-cpp -S -o - | FileCheck {input} --check CHECK --check OTHERS

int long_double_align = __alignof__(long double);
// CHECK-LABEL: long_double_align:
// IA32_LINUX: .long 0x00000004
// IA32_DARWIN: .long 0x00000010
// IA32_MINGW: .long 0x00000004
// X86_64: .long 0x00000010
// OTHERS: .long 0x00000008

int long_long_align = __alignof__(long long);
// CHECK-LABEL: long_long_align:
// IA32_LINUX: .long 0x00000008
// IA32_DARWIN: .long 0x00000008
// IA32_MINGW: .long 0x00000008
// X86_64: .long 0x00000008
// OTHERS: .long 0x00000008

struct {
    double x;
} X;
int double_in_struct_align = __alignof__(X.x);
// CHECK-LABEL: double_in_struct_align:
// IA32_LINUX: .long 0x00000004
// IA32_DARWIN: .long 0x00000004
// IA32_MINGW: 0x00000008
// X86_64: .long 0x00000008
// OTHERS: .long 0x00000008

struct {
    long long y;
} Y;
int long_long_in_struct_align = __alignof__(Y.y);
// CHECK-LABEL: long_long_in_struct_align:
// IA32_LINUX: .long 0x00000004
// IA32_DARWIN: .long 0x00000004
// IA32_MINGW: 0x00000008
// X86_64: .long 0x00000008
// OTHERS: .long 0x00000008
