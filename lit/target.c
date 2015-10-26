// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target i686-linux-gnu | LC_ALL=C sort | FileCheck %s --check-prefix IA32 --check-prefix IA32_NOT_MINGW --check-prefix LINUX --check-prefix CHECK
// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target i686-apple-darwin | LC_ALL=C sort | FileCheck %s --check-prefix IA32 --check-prefix IA32_NOT_MINGW --check-prefix DARWIN --check-prefix CHECK
// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target i686-pc-mingw32 | LC_ALL=C sort | FileCheck %s --check-prefix IA32 --check-prefix IA32_MINGW --check-prefix MINGW --check-prefix CHECK
// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target x86_64-linux-gnu | LC_ALL=C sort | FileCheck %s --check-prefix X86_64 --check-prefix X86_64_NOT_MINGW --check-prefix LINUX --check-prefix CHECK
// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target x86_64-apple-darwin | LC_ALL=C sort | FileCheck %s --check-prefix X86_64 --check-prefix X86_64_NOT_MINGW --check-prefix DARWIN --check-prefix CHECK
// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target x86_64-pc-mingw32 | LC_ALL=C sort | FileCheck %s --check-prefix X86_64 --check-prefix X86_64_MINGW --check-prefix MINGW --check-prefix CHECK
// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target x86_64-linux-gnu -m32 | LC_ALL=C sort | FileCheck %s --check-prefix IA32 --check-prefix LINUX --check-prefix CHECK
// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target x86_64-apple-darwin -m32 | LC_ALL=C sort | FileCheck %s --check-prefix IA32 --check-prefix DARWIN --check-prefix CHECK
// RUN: cparser -integrated-cpp -E -dM -x c /dev/null -target x86_64-pc-mingw32 -m32 | LC_ALL=C sort | FileCheck %s --check-prefix IA32 --check-prefix MINGW --check-prefix CHECK

// Just check some defines to see that we got a sane baseline, this is not
// comprehensive.
// Keep in mind that the checks need to be sorted in alphabetical order.

// IA32: #define __INT32_TYPE__ int
// X86_64: #define __INT32_TYPE__ int
// IA32: #define __INT64_TYPE__ long long int
// X86_64_NOT_MINGW: #define __INT64_TYPE__ long int
// X86_64_MINGW: #define __INT64_TYPE__ long long int
// IA32: #define __INTPTR_MAX__ 2147483647
// X86_64: #define __INTPTR_MAX__ 9223372036854775807
// CHECK: #define __SIZEOF_DOUBLE__ 8
// CHECK: #define __SIZEOF_FLOAT__ 4
// IA32: #define __SIZEOF_INT__ 4
// CHECK: #define __SIZEOF_LONG_LONG__ 8
// IA32: #define __SIZEOF_LONG__ 4
// X86_64_NOT_MINGW: #define __SIZEOF_LONG__ 8
// X86_64_MINGW: #define __SIZEOF_LONG__ 4
// LINUX: #define __SIZEOF_WCHAR_T__ 4
// LINUX: #define __WCHAR_MAX__ 2147483647
// LINUX: #define __WCHAR_TYPE__ int
// IA32: #define __i386 1
// IA32: #define __i386__ 1
// X86_64-NOT: #define __i386__
// LINUX: #define __linux__ 1
// DARWIN-NOT: #define __linux__ 1
// MINGW-NOT: #define __linux__ 1
// X86_64: #define __x86_64__ 1
// IA32-NOT: #define __x86_64__
