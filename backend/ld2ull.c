#include <stdio.h>

long double v = 0x3p62;

int main(void)
{
  printf("%llu\n", (unsigned long long)v);
  return 0;
}
