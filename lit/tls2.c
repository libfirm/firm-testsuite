// RUN: cparser -w -target i686-linux-gnu -integrated-cpp -S -o - %s | FileCheck %s

static __thread int l0;

// CHECK: addr_l0:
// CHECK: movl %gs:0,
// CHECK: leal l0@NTPOFF({{.*}}),
// CHECK: ret
int *addr_l0(void) { return &l0; }

__thread int g1 = 5;
// CHECK: get_g1:
// CHECK: movl %gs:g1@NTPOFF, %eax
// CHECK: ret
int get_g1(void) { return g1; }
void set_g1(int x) { g1 = x; }

__thread struct { int a, b; } g2;
// CHECK: get_g2_b:
// CHECK: movl %gs:g2@NTPOFF+4, %eax
// CHECK: ret
int get_g2_b(void) { return g2.b; }
void set_g2(int a, int b) { g2.a = a; g2.b = b; }

// TODO: Fix cparser for external TLS variables
// CHECK: get_extvar_b:
// FAIL: movl extvar@INDNTPOFF,
// FAIL: movl %gs:4({{.*}}), %eax
// FAIL: ret
extern __thread struct { int a, b; } extvar;
int get_extvar_b(void) { return extvar.b; }
