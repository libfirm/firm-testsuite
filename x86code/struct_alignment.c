#include <stdio.h>

typedef unsigned long long foobar;

struct S0 {
   int    f0;
   foobar f1;
};

int main(void)
{
    printf("%zu\n", __builtin_offsetof(struct S0, f1));
    return 0;
}
