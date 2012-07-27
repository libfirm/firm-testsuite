#include <stdarg.h>

typedef double L;

int f (L p0, L p1, L p2, L p3, L p4, L p5, L p6, L p7, L p8, ...)
{
  va_list select;

  (void) p0;
  (void) p1;
  (void) p2;
  (void) p3;
  (void) p4;
  (void) p5;
  (void) p6;
  (void) p7;

  va_start (select, p8);

  if (va_arg (select, L) != 10.)
    return 1;
  if (va_arg (select, L) != 11.)
    return 2;
  if (va_arg (select, L) != 0.)
    return 3;

  va_end (select);

  return 0;
}

int main ()
{
  return f (1., 2., 3., 4., 5., 6., 7., 8., 9., 10., 11., 0.);
}
