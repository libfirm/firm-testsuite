#include <stdio.h>

/**
 * On arm this function should get parameters passed in 4 register and 1
 * stackslot:
 *  r0+r1: double a
 *  r2: int b
 *  r3+stackslot: double c
 */
double __attribute__((noinline)) func(double a, int b, double c)
{
	return a + b - c;
}

int main(void)
{
	double res = func(1.0, 1, 3.0);
	printf("Result: %f\n", res);
	return 0;
}
