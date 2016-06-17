#include <stdio.h>

int x = 23;

int main(void)
{
  long double v = x ? 1.234567890123L : 0.123456789012L;
  printf("%Lf\n", v);
  return 0;
}
