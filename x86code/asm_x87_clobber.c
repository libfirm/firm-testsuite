#include <stdio.h>

int main(void)
{
	double x;
	asm("fstpl %0" : "=m" (x) : "t" (23.0) : "st");
	printf("%f\n", x);

	double a = 19;
	double b = 23;
	double c;
	asm("faddp" : "=t" (c) : "0" (a), "u" (b) : "st(1)");
	printf("%f\n", c);

	return 0;
}
