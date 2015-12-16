// RUN: {cc} -integrated-cpp -E -dM -x c /dev/null -fshort-wchar -target i686-linux-gnu | LC_ALL=C sort | FileCheck {input} --check-prefix SHORT_WCHAR
// RUN: {cc} -integrated-cpp -E -dM -x c /dev/null -target i686-linux-gnu -fshort-wchar | LC_ALL=C sort | FileCheck {input} --check-prefix SHORT_WCHAR
// RUN: {cc} -integrated-cpp -E -dM -x c /dev/null -target i686-linux-gnu | LC_ALL=C sort | FileCheck {input} --check-prefix INT_WCHAR
// RUN: {cc} -integrated-cpp -E -dM -x c /dev/null -fshort-wchar -target i686-linux-gnu -fno-short-wchar | LC_ALL=C sort | FileCheck {input} --check-prefix INT_WCHAR

// Tests that specific options like -fshort-wchar override target defaults set
// by -target.
// SHORT_WCHAR: #define __SIZEOF_WCHAR_T__ 2
// INT_WCHAR: #define __SIZEOF_WCHAR_T__ 4
