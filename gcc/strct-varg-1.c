#include <stdarg.h>

struct s { int x, y; };

int f (int attr, ...)
{
  struct s va_values;
  va_list va;

  va_start (va, attr);

  if (attr != 2)
    return 1;

  va_values = va_arg (va, struct s);
  if (va_values.x != 0xaaaa || va_values.y != 0x5555)
    return 2;

  attr = va_arg (va, int);
  if (attr != 3)
    return 3;

  va_values = va_arg (va, struct s);
  if (va_values.x != 0xffff || va_values.y != 0x1111)
    return 4;

  va_end (va);
  return 0;
}

int main ()
{
  struct s a, b;

  a.x = 0xaaaa;
  a.y = 0x5555;
  b.x = 0xffff;
  b.y = 0x1111;

  return f (2, a, 3, b);
}
