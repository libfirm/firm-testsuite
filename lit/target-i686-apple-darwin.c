// RUN: {cc} -target i686-apple-darwin -integrated-cpp -E -dM -x c /dev/null | LC_ALL=C sort | FileCheck {input}

// CHECK: #define _ILP32 1
// CHECK-NOT: #define _ILP64
// CHECK: #define __APPLE__ 1
// CHECK: #define __BIGGEST_ALIGNMENT__ 16
// CHECK: #define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
// CHECK-NOT: #define __ELF__ 1
// CHECK: #define __INT32_TYPE__ int
// CHECK: #define __INT64_TYPE__ long long int
// CHECK: #define __INTPTR_TYPE__ int
// CHECK: #define __LDBL_MANT_DIG__ 64
// CHECK: #define __MACH__ 1
// CHECK: #define __SIZEOF_DOUBLE__ 8
// CHECK: #define __SIZEOF_FLOAT__ 4
// CHECK: #define __SIZEOF_INT__ 4
// CHECK: #define __SIZEOF_LONG_DOUBLE__ 16
// CHECK: #define __SIZEOF_LONG_LONG__ 8
// CHECK: #define __SIZEOF_LONG__ 4
// CHECK: #define __SIZEOF_WCHAR_T__ 4
// CHECK: #define __USER_LABEL_PREFIX__ _
// CHECK: #define __WCHAR_TYPE__ int
// CHECK: #define __i386 1
// CHECK: #define __i386__ 1
// CHECK: #define __i686 1
// CHECK: #define __i686__ 1
// CHECK: #define __pic__ 2
// CHECK-NOT: #define __linux__
// CHECK-NOT: #define __x86_64__
