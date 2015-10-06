// RUN: cparser -mtarget=i686-linux-gnu -integrated-cpp -S -o - %s | FileCheck %s --check-prefix ELF
// RUN: cparser -mtarget=i686-apple-darwin -integrated-cpp -S -o - %s | FileCheck %s --check-prefix MACHO

// ELF-NOT: .globl common
// ELF-NOT: .type common
// ELF: .comm common,4,4
// MACHO-NOT: .globl _common
// MACHO: .comm _common,4,2
int common;

// ELF-NOT: .globl common_c
// ELF-NOT: .type common_c
// ELF: .comm common_c,1,1
// MACHO-NOT: .globl _common_c
// MACHO: .comm _common_c,1,0
char common_c;

// ELF-NOT: .globl common_c_a16
// ELF-NOT: .type common_c_a16
// ELF: .comm common_c_a16,1,16
// MACHO-NOT: .globl _common_c_a16
// MACHO: .comm _common_c_a16,1,4
char __attribute__((aligned(16))) common_c_a16;

// ELF: .data
// ELF: .globl init
// ELF: .p2align 1
// ELF: .type init, @object
// ELF: .size init, 2
// ELF: init:
// ELF: .short 0x0005
// MACHO: .section __DATA,__data
// MACHO: .globl _init
// MACHO: .p2align 1
// MACHO: _init:
// MACHO: .short 0x0005
short init = 5;

// ELF: .bss
// ELF: .globl init0
// ELF: .p2align 2
// ELF: .type init0, @object
// ELF: .size init0, 4
// ELF: init0:
// ELF: .space 4, 0
// MACHO: .globl _init0
// MACHO: .zerofill __DATA,__common,_init0,4,2
float init0 = 0.0f;

// ELF: .section .rodata
// ELF: .globl cnst
// ELF: .p2align 3
// ELF: .type cnst, @object
// ELF: .size cnst, 8
// ELF: cnst:
// ELF: .quad 0x0000000000000037
// MACHO: .section __TEXT,__const
// MACHO: .globl _cnst
// MACHO: .p2align 3
// MACHO: _cnst:
// MACHO: .quad 0x0000000000000037
const long long cnst = 55;

// ELF: .globl cnst0
// ELF: .p2align 3
// ELF: .type cnst0, @object
// ELF: .size cnst0, 8
// ELF: cnst0:
// ELF: .space 8, 0
// MACHO: .globl _cnst0
// MACHO: .p2align 3
// MACHO: _cnst0:
// MACHO: .space 8, 0
const double cnst0 = 0.0;

// ELF: .bss
// ELF: .globl zerosize
// ELF: .type zerosize, @object
// ELF: .size zerosize, 0
// ELF: zerosize:
// macho exception: need at least 1 byte
// MACHO: .globl _zerosize
// MACHO: .zerofill __DATA,__common,_zerosize,1,0
__extension__ struct { } zerosize = {};

// ELF: .section .rodata
// ELF: .globl zerosizecnst
// ELF: .type zerosizecnst, @object
// ELF: .size zerosizecnst, 0
// ELF: zerosizecnst:
// macho exception: need at least 1 byte
// MACHO: .globl _zerosizecnst
// MACHO: _zerosizecnst:
// MACHO: .space 1, 0
__extension__ const struct { } zerosizecnst = {};

// ELF: .data
// ELF-NOT: .globl staticvar5
// ELF: .p2align 2
// ELF: .type staticvar5, @object
// ELF: .size staticvar5, 4
// ELF: staticvar5:
// ELF: .long 0x00000005
// MACHO: .section __DATA,__data
// MACHO-NOT: .globl _staticvar5
// MACHO: .p2align 2
// MACHO: _staticvar5:
// MACHO: .long 0x00000005
static int staticvar5 = 5;
void *escape_staticvar5(void) { return &staticvar5; }

// ELF-NOT: .bss
// ELF-NOT: .globl staticvar0
// ELF-NOT: .p2align 3
// ELF-NOT: .type staticvar0, @object
// ELF-NOT: .size staticvar0
// ELF-NOT: staticvar0:
// ELF: .local staticvar0
// ELF: .comm staticvar0,12,4
// MACHO-NOT: .section
// MACHO-NOT: .globl _staticvar0
// MACHO-NOT: .p2align
// MACHO-NOT: _staticvar0:
// MACHO: .zerofill __DATA,__bss,_staticvar0,16,4
static long double staticvar0;
void *escape_staticvar0(void) { return &staticvar0; }

// ELF: .section .rodata
// ELF-NOT: .globl staticconst7
// ELF: .p2align 1
// ELF: .type staticconst7, @object
// ELF: .size staticconst7, 2
// ELF: staticconst7:
// ELF: .short 0x0007
// MACHO: .section __TEXT,__const
// MACHO-NOT: .globl _staticconst7
// MACHO: .p2align 1
// MACHO: _staticconst7:
// MACHO: .short 0x0007
static const unsigned short staticconst7 = 7;
const void *escape_staticconst7(void) { return &staticconst7; }

// ELF-NOT: extint
// MACHO-NOT: extint
extern int extint;
void *escape_extint(void) { return &extint; }

// ELF: .comm used,4,4
// MACHO: .no_dead_strip _used
// MACHO: .comm _used,4,2
int __attribute__((used)) used;

// ELF: .local
// ELF: .comm staticused,4,4
// MACHO: .no_dead_strip _staticused
// MACHO: .zerofill __DATA,__bss,_staticused,4,2
static int __attribute__((used)) staticused;

// ELF: .data
// ELF: .globl str
// ELF: .type str, @object
// ELF: .size str, 6
// ELF: str:
// ELF: .asciz "Hello"
// MACHO: .section __DATA,__data
// MACHO: .globl _str
// MACHO: _str:
// MACHO: .asciz "Hello"
char str[] = "Hello";

// ELF: .section .rodata
// ELF: .globl conststr
// ELF: .type conststr, @object
// ELF: .size conststr, 6
// ELF: conststr:
// ELF: .asciz "Hallo"
// MACHO: .section __TEXT,__const
// MACHO: .globl _conststr
// MACHO: _conststr:
// MACHO: .asciz "Hallo"
const char conststr[] = "Hallo";

// ELF: .globl emptystr
// ELF: .type emptystr, @object
// ELF: .size emptystr, 1
// ELF: emptystr:
// ELF: .space 1, 0
// MACHO: .globl _emptystr
// MACHO: _emptystr:
// MACHO: .space 1, 0
const char emptystr[] = "";

// ELF: .globl strlitptr
// ELF: .type strlitptr, @object
// ELF: .size strlitptr, 4
// ELF: strlitptr:
// ELF: .long .Lstr.2
// MACHO: .section __DATA,__data
// MACHO: .globl _strlitptr
// MACHO: .p2align 2
// MACHO: _strlitptr:
// MACHO: .long Lstr.2
const char *strlitptr = "World";

// ELF: .section .rodata
// ELF: .globl no_cstring
// ELF: .type no_cstring, @object
// ELF: .size no_cstring, 4
// ELF: no_cstring:
// ELF: .long .Lstr.3
// MACHO: .section __DATA,__const
// MACHO: .globl _no_cstring
// MACHO: .p2align 2
// MACHO: _no_cstring:
// MACHO: .long Lstr.3
const char *const no_cstring = "blup\0secret";

// ELF: .Lstr.2:
// ELF: .asciz "World"
// ELF: .Lstr.3:
// ELF: .asciz "blup\000secret"
// MACHO: .section __TEXT,__cstring,cstring_literals
// MACHO: Lstr.2:
// MACHO: .asciz "World"
// macho exception: cannot use cstring section for strings containing a '\0'
// MACHO: .section __TEXT,__const
// MACHO: Lstr.3:
// MACHO: .asciz "blup\000secret"
