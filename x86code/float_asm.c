#include <stdio.h>

int main(void)
{
	double a;
	asm("fld1" : "=t" (a));
	printf("%f\n", a);

	double b = -42.;
	asm("fchs" : "+t" (b));
	printf("%f\n", b);

	double c;
	double d;
	asm("fld1; fldz" : "=t" (c), "=u" (d));
	printf("%f %f\n", c, d);

	return 0;
}
