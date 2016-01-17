// RUN: not {cc} -fno-PIC -integrated-cpp -bisa=TEMPLATE -S -o- {input} 2>&1 | FileCheck {input}
// RUN: {cc} -integrated-cpp -target i686-linux-gnu {input} -S -o/dev/null
// RUN: {cc} -integrated-cpp -fno-PIC -bisa=TEMPLATE --print-ast {input} -o/dev/null

// CHECK: [[@FILE]]:[[@LINE+1]]:14: error: Thread local storage not supported by backend
__thread int a;

int main(void)
{
}
