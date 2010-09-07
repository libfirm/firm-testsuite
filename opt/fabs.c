#include <math.h>
#include <stdio.h>

#ifdef _MSC_VER
#define NOINLINE __declspec(noinline)

static double ZERO     = 0.0;
static double NAN      = 0.0;
static double INFINITY = 1.0;

#else
#define NOINLINE __attribute__((noinline))
#endif

static float NOINLINE fabs1(float a)
{
	return a < 0 ? -a : a;
}

static float NOINLINE fabs2(float a)
{
	return !(a < 0) ? a : -a;
}

int main(void)
{
#ifdef _MSC_VER
	NAN /= ZERO;
	INFINITY /= ZERO;
#endif
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
