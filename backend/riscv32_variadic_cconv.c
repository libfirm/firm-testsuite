#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

static void f(int a, long long b, int c, const char* fmt, ...)
{
  va_list va;
  va_start(va, fmt);
  vprintf(fmt, va);
  va_end(va);
  printf("a: %d  b: %lld  c: %d\n", a, b, c);
}


int main(void)
{
  long long x = INT_MAX;
  x = 1;
  // x has to be placed in an aligned register pair
  f(42, 1337, -1, "%lld %d %d %d %d %d %d %d %d\n", x, 2, 3, 4, 5, 6, 7, 8, 9);
  return 0;
}
