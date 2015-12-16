// RUN: {cc} -target i686-linux-gnu -fPIC -integrated-cpp -S -o - {input} | FileCheck {input} --check-prefix ELF --check-prefix CHECK
// RUN: {cc} -target i686-apple-darwin -fPIC -integrated-cpp -S -o - {input} | FileCheck {input} --check-prefix MACHO --check-prefix CHECK

static void intfunc(void) {}

// ELF: .data
// ELF: .globl glob
// MACHO: .section __DATA,__data
// MACHO: .globl _glob
unsigned glob = 13;

// ELF: .rodata
// ELF: .globl cnst
// MACHO: .section __TEXT,__const
// MACHO: .globl _cnst
const unsigned cnst = 42;

extern unsigned extglob;

// ELF: .section .data.rel.ro,"aw",@progbits
// ELF: .globl constaddr_glob
// MACHO: .section __DATA,__const
// MACHO: .globl _constaddr_glob
void *const constaddr_glob = &glob;

// ELF: .section .data.rel.ro.local,"aw",@progbits
// ELF: .globl constaddr_intfunc
// MACHO: .section __DATA,__const
// MACHO: .globl _constaddr_intfunc
void *const constaddr_intfunc = &intfunc;
