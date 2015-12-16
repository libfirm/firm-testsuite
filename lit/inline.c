// RUN: {cc} -std=c99 -target i686-linux-gnu -integrated-cpp -S -o - {input} | FileCheck --check-prefix=CHECK --check-prefix=C99 {input}
// RUN: {cc} -std=gnu89 -target i686-linux-gnu -integrated-cpp -S -o - {input} | FileCheck --check-prefix=CHECK --check-prefix=GNU89 {input}

// CHECK-NOT: func0
extern inline __attribute__((gnu_inline)) int func0(void) { return 13; }

// CHECK-NOT: func1
extern inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int func1(void);
extern inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int func1(void) { return 42; }

// CHECK-NOT: func1b
// Note that this is not valid gcc in gcc (but in clang + cparser)
extern inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int func1b(void);
extern inline __attribute__((__always_inline__)) int func1b(void) { return 42; }

// GNU89: func2
// C99-NOT: func2
int inline func2(void) { return 5; }

// CHECK: func3
int inline __attribute__((gnu_inline)) func3(void) { return 7; }

// CHECK-NOT: func4
static inline int func4(void) { return 3; }

// CHECK-NOT: func5
static inline int __attribute__((gnu_inline)) func5(void) { return -1; }

// CHECK: func6
static inline int func6(void) { return 11; }
void *escape6 = func6;

// GNU89-NOT: func7:
// C99: func7:
extern inline int func7(void) { return 99; }
void *escape7 = func7;

// GNU89-NOT: func8:
// C99-NOT: func8:
extern inline __attribute__((gnu_inline)) int func8(void) { return 88; }
void *escape8 = func8;

// GNU89: func9:
// C99-NOT: func9:
inline int func9(void) { return 100; }
void *escape9 = func9;

// GNU89: func10:
// C99: func10:
inline int __attribute__((gnu_inline)) func10(void) { return 111; }
void *escape10 = func10;

extern inline int func11(void) { return -5; }
extern inline __attribute__((gnu_inline)) int func12(void) { return -6; }
inline int func13(void) { return -7; }
inline int __attribute__((gnu_inline)) func14(void) { return -8; }

// CHECK-LABEL: used:
void used(void) {
	func11();
	func12();
	func13();
	func14();
}
