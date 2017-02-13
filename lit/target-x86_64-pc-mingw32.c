// RUN: {cc} -target x86_64-pc-mingw32 -integrated-cpp -E -dM -x c /dev/null | LC_ALL=C sort | FileCheck {input}

// CHECK-NOT: #define _LP64
// CHECK-NOT: #define _ILP32
// CHECK-NOT: #define __APPLE__ 1
// CHECK: #define __BIGGEST_ALIGNMENT__ 16
// CHECK: #define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
// CHECK-NOT: #define __ELF__ 1
// CHECK: #define __INT32_TYPE__ int
// CHECK: #define __INT64_TYPE__ long long int
// CHECK: #define __INTPTR_TYPE__ long long int
// CHECK: #define __LDBL_MANT_DIG__ 64
// CHECK: #define __MINGW32__ 1
// CHECK: #define __MINGW64__ 1
// CHECK: #define __PE__ 1
// CHECK: #define __SIZEOF_DOUBLE__ 8
// CHECK: #define __SIZEOF_FLOAT__ 4
// CHECK: #define __SIZEOF_INT__ 4
// CHECK: #define __SIZEOF_LONG_DOUBLE__ 16
// CHECK: #define __SIZEOF_LONG_LONG__ 8
// CHECK: #define __SIZEOF_LONG__ 4
// CHECK: #define __SIZEOF_WCHAR_T__ 2
// CHECK: #define __USER_LABEL_PREFIX__{{\s*$}}
// CHECK: #define __WCHAR_TYPE__ short unsigned int
// CHECK: #define __WIN32__ 1
// CHECK: #define __WIN64__ 1
// CHECK: #define __WINNT__ 1
// CHECK-NOT: #define __i386__
// CHECK-NOT: #define __linux__
// CHECK-NOT: #define __pic__
// CHECK: #define __x86_64__
