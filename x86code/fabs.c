static float __attribute__((noinline)) fabs1(float a)
{
	return a < 0 ? -a : a;
}

static float __attribute__((noinline)) fabs2(float a)
{
	return !(a < 0) ? a : -a;
}

#include <math.h>
#include <stdio.h>

int main(void)
{
	printf("abs1(%f) = %f\n", NAN, fabs1(NAN));
	printf("abs2(%f) = %f\n", NAN, fabs2(NAN));
	printf("abs1(%f) = %f\n", 1.0, fabs1(1.0));
	printf("abs2(%f) = %f\n", 1.0, fabs2(1.0));
	printf("abs1(%f) = %f\n", -1.0, fabs1(-1.0));
	printf("abs2(%f) = %f\n", -1.0, fabs2(-1.0));
	printf("abs1(%f) = %f\n", INFINITY, fabs1(INFINITY));
	printf("abs2(%f) = %f\n", INFINITY, fabs2(INFINITY));
	printf("abs1(%f) = %f\n", -INFINITY, fabs1(-INFINITY));
	printf("abs2(%f) = %f\n", -INFINITY, fabs2(-INFINITY));

	return 0;
}
