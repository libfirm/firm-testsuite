#include <stdio.h>

int main() {
    volatile int i = 42;
    printf("%d\n", __builtin_ctz(i));
}
