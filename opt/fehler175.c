#include <math.h>
#include <stdio.h>

double one = 1.0;
double pinf = INFINITY;
double ninf = -INFINITY;

int main(void)
{
	double o = one;
	double p = pinf;
	double n = ninf;
	printf("%f o> %f = %d\n", o, p, o > p);
	printf("%f o< %f = %d\n", o, p, o < p);
	printf("%f ord %f = %d\n", o, n, !isunordered(o, n));
	return 0;
}
