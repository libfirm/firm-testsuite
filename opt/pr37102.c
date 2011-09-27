/* Taken from GCC's torture testsuite and slightly modified. */

unsigned int a = 0, b = 1, c = 0;

int main ()
{
  unsigned int d, e;
  for (d = 1; d < 5; d++)
    if (c)
      a = b;
  a = b;
  e = a << 1;
  if (e)
    e = (e << 1) ^ 1;
  return e != 5;
}
