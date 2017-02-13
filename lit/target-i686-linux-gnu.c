// RUN: {cc} -target i686-linux-gnu -integrated-cpp -E -dM -x c /dev/null | LC_ALL=C sort | FileCheck {input}

// CHECK: #define _ILP32 1
// CHECK-NOT: #define _ILP64
// CHECK-NOT: #define __APPLE__ 1
// CHECK: #define __BIGGEST_ALIGNMENT__ 16
// CHECK: #define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
// CHECK: #define __ELF__ 1
// CHECK: #define __INT32_TYPE__ int
// CHECK: #define __INT64_TYPE__ long long int
// CHECK: #define __INTPTR_TYPE__ int
// CHECK: #define __LDBL_MANT_DIG__ 64
// CHECK: #define __SIZEOF_DOUBLE__ 8
// CHECK: #define __SIZEOF_FLOAT__ 4
// CHECK: #define __SIZEOF_INT__ 4
// CHECK: #define __SIZEOF_LONG_DOUBLE__ 12
// CHECK: #define __SIZEOF_LONG_LONG__ 8
// CHECK: #define __SIZEOF_LONG__ 4
// CHECK: #define __SIZEOF_WCHAR_T__ 4
// CHECK: #define __USER_LABEL_PREFIX__{{\s*$}}
// CHECK: #define __WCHAR_TYPE__ int
// CHECK: #define __gnu_linux__ 1
// CHECK: #define __i386 1
// CHECK: #define __i386__ 1
// CHECK: #define __i686 1
// CHECK: #define __i686__ 1
// CHECK: #define __linux 1
// CHECK: #define __linux__ 1
// CHECK-NOT: #define __pic__
// CHECK: #define __unix 1
// CHECK: #define __unix__ 1
// CHECK-NOT: #define __x86_64__
