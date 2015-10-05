// RUN: cparser -mtarget=i686-linux-gnu -fPIC -integrated-cpp -S -o - %s | FileCheck %s --check-prefix ELF --check-prefix CHECK
// RUN: cparser -mtarget=i686-apple-darwin -fPIC -integrated-cpp -S -o - %s | FileCheck %s --check-prefix MACHO --check-prefix CHECK

static void intfunc(void) {}

// ELF: .globl glob
// ELF: .data
// MACHO: .globl _glob
// MACHO: .section __DATA,__data
unsigned glob = 13;

// ELF: .globl cnst
// ELF: .rodata
// MACHO: .globl _cnst
// MACHO: .section __TEXT,__const
const unsigned cnst = 42;

extern unsigned extglob;

// ELF: .globl constaddr_glob
// ELF: .section .data.rel.ro,"aw",@progbits
// MACHO: .globl _constaddr_glob
// MACHO: .section __DATA,__const
void *const constaddr_glob = &glob;

// ELF: .globl constaddr_intfunc
// ELF: .section .data.rel.ro.local,"aw",@progbits
// MACHO: .globl _constaddr_intfunc
// MACHO: .section __DATA,__const
void *const constaddr_intfunc = &intfunc;
