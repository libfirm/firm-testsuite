// RUN: cparser -mtarget=i686-apple-darwin -integrated-cpp -S -o - %s | FileCheck %s --check-prefix MACHO
// RUN: cparser -mtarget=i686-linux-gnu -integrated-cpp -S -o - %s | FileCheck %s --check-prefix ELF

// Zero sized thing
// ELF: .globl zerosize
// ELF: .bss
// ELF: .type zerosize, @object
// ELF: .size zerosize, 0
// ELF: zerosize:
// macho exception: need at least 1 byte
// This should also use .zerofill...
// MACHO: .globl _zerosize
// MACHO: .section __DATA,__bss
// MACHO: _zerosize:
// MACHO: .byte 0
__extension__ struct { } zerosize = {};

// ELF: .globl str
// ELF: .section .rodata
// ELF: .type str, @object
// ELF: .size str, 6
// ELF: str:
// ELF: .asciz "Hello"
// MACHO: .globl _str
// MACHO: .section __TEXT,__cstring,cstring_literals
// MACHO: _str:
// MACHO: .asciz "Hello"
const char str[] = "Hello";

// ELF: .globl emptystr
// ELF: .type emptystr, @object
// ELF: .size emptystr, 1
// ELF: emptystr:
// ELF: .space 1, 0
// MACHO: .globl _emptystr
// MACHO: .section __TEXT,__const
// MACHO: _emptystr:
// MACHO: .space 1, 0
const char emptystr[] = "";

// ELF: .globl cint
// ELF: .p2align 2
// ELF: .type cint, @object
// ELF: .size cint, 4
// ELF: cint:
// ELF: .long 0x00000037
// MACHO: .globl _cint
// MACHO: .p2align 2
// MACHO: _cint:
// MACHO: .long 0x00000037
const int cint = 55;
