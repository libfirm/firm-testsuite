#include <stdio.h>

struct S0 {
   int f0;
   int: 0;
   unsigned long long f1;
};

struct S0 global = {1L, 0xB119D2B54446D154LL};

int main(void)
{
    printf("%llu\n", global.f1);
    return 0;
}
