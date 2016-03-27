#include <stdio.h>
#include <stdlib.h>

/* Missing struct declaration wreaks havoc afterwards... */
//struct B { unsigned short i : 4, j : 1, k : 11; unsigned int l; }; T(B)

static unsigned int myrnd (void)
{
  static unsigned int s = 1388815473;
  s *= 1103515245;
  s += 12345;
  return (s / 65536) % 2048;
}

static struct B sB;
static struct B retmeB (struct B x)
{
  return x;
}

static unsigned int fn1B (unsigned int x)
{
  struct B y = sB;
  y.k += x;
  y = retmeB (y);
  return y.k;
}

static void testB (void)
{
  int i;
  unsigned int r;
  struct B x;
  char *p = (char *) &sB;
  for (i = 0; i < sizeof (sB); ++i)
    *p++ = myrnd ();
  if (__builtin_classify_type (sB.l) == 8)
    sB.l = 5.25;
  sB.k = -1;
  unsigned mask = sB.k;
  unsigned v = myrnd ();
  unsigned a = myrnd ();
  sB.k = v;
  x = sB;
  r = fn1B (a);
  if (x.i != sB.i || x.j != sB.j
      || x.k != sB.k || x.l != sB.l
      || ((v + a) & mask) != r) {
    printf("abort '%s' 1\n", "bla" );
    abort ();
  }
}

int main (void)
{
  testB ();
  exit (0);
}
