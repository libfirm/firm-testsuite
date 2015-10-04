// RUN: cparser -w -mtarget=i686-linux-gnu -integrated-cpp -S -o - %s | FileCheck %s

// CHECK: .globl g0
// CHECK: .section .tbss,"awT",@nobits
// CHECK: .p2align 2
// CHECK: .type g0, @object
// CHECK: .size g0, 4
// CHECK: g0:
// CHECK: .space 4, 0
__thread int g0;

// CHECK: .globl g1
// CHECK: .section .tdata,"awT",@progbits
// CHECK: .p2align 2
// CHECK: .type g1, @object
// CHECK: .size g1, 4
// CHECK: g1:
// CHECK: .long 0x00000001
__thread int g1 = 1;

// doesn't make sense to have const TLS data, but whatever...
// CHECK: .globl g2
// CHECK: .p2align 2
// CHECK: .type g2, @object
// CHECK: .size g2, 4
// CHECK: g2:
// CHECK: .long 0x00000002
__thread const int g2 = 2;

// CHECK-NOT: .globl l0
// CHECK: .section .tbss,"awT",@nobits
// CHECK: .p2align 2
// CHECK: .type l0, @object
// CHECK: .size l0, 4
// CHECK: l0:
// CHECK: .space 4, 0
static __thread int l0;

// CHECK-NOT: .globl l1
// CHECK: .section .tdata,"awT",@progbits
// CHECK: .p2align 2
// CHECK: .type l1, @object
// CHECK: .size l1, 4
// CHECK: l1:
// CHECK: .long 0x00000001
static __thread int l1 = 1;

int *escape_l0(void) { return &l0; }
int *escape_l1(void) { return &l1; }
