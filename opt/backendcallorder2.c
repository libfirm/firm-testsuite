#include <math.h>
#include <stdio.h>

int numf1s;
double d;
double *bus;

void init_bu(int start)
{
  int i;

  for (i = 0; i < numf1s; i++)
      bus[i] = 1 / (1.0 - d) / sqrt((double)numf1s);
}

int main()
{
  double tmp[123];

  numf1s = 123;
  bus    = tmp;
  d      = 0.94;
  init_bu(0);

  printf("%f\n", bus[42]);
  return 0;
}
