// RUN: {cc} -target i686-linux-gnu -integrated-cpp -S -o - {input} | FileCheck {input} --check-prefix ELF
// RUN: {cc} -target i686-apple-darwin -integrated-cpp -S -o - {input} | FileCheck {input} --check-prefix MACHO

// MACHO: .section __TEXT,__text,regular,pure_instructions
// ELF: .text

// MACHO: .globl _defaultt
// MACHO: _defaultt:
// ELF: .globl defaultt
// ELF: defaultt:
void __attribute__((visibility("default"))) defaultt(void) {}

// MACHO-NOT: .globl _hidden
// MACHO: .private_extern _hidden
// MACHO: _hidden:
// ELF: .globl hidden
// ELF: .hidden hidden
// ELF: hidden:
void __attribute__((visibility("hidden"))) hidden(void) {}

// MACHO-NOT: .globl _internal
// MACHO: .private_extern _internal
// MACHO: _internal:
// ELF: .globl internal
// ELF: .hidden internal
void __attribute__((visibility("internal"))) internal(void) {}

// MACHO: .globl _protected
// MACHO: _protected:
// ELF: .globl protected
// ELF: .protected protected
void __attribute__((visibility("protected"))) protected(void) {}


// MACHO: .comm _defaulttvar,4,2
// ELF: .comm defaulttvar,4,4
int __attribute__((visibility("default"))) defaulttvar;

// MACHO: .private_extern _hiddenvar
// MACHO: .comm _hiddenvar,4,2
// ELF: .hidden hiddenvar
// ELF: .comm hiddenvar,4,4
float __attribute__((visibility("hidden"))) hiddenvar;

// MACHO: .private_extern _internalvar
// MACHO: .comm _internalvar,4,2
// ELF: .hidden internalvar
// ELF: .comm internalvar,4,4
unsigned __attribute__((visibility("internal"))) internalvar;

// MACHO-NOT: .globl _protectedvar
// MACHO: .comm _protectedvar,8,3
// ELF: .protected protectedvar
// ELF: .comm protectedvar,8,8
double __attribute__((visibility("protected"))) protectedvar;
