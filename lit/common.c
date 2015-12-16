// RUN: {cc} -target i686-apple-darwin -integrated-cpp -S -o - {input} | FileCheck {input} --check-prefix MACHO
// RUN: {cc} -target i686-linux-gnu -integrated-cpp -S -o - {input} | FileCheck {input} --check-prefix ELF
//
// Test creation of "common" variables

// MACHO: .comm _c0,4,2
// ELF: .comm c0,4,4
int c0;
// MACHO: .section __DATA,__data
// MACHO: .globl _c1
// MACHO: .p2align 2
// MACHO: _c1:
// MACHO: .long 0x0000002a
// ELF: .data
// ELF: .globl c1
// ELF: .p2align 2
// ELF: .type c1, @object
// ELF: .size c1, 4
// ELF: c1:
// ELF: .long 0x0000002a
int c1 = 42;
