#include <stdio.h>
#include <math.h>

float minus_inf = -INFINITY;
float inf = INFINITY;

int main(void)
{
	float pinf = inf;
	float ninf = minus_inf;
	int v0 = pinf >= ninf ? 42 : 13;
	int v1 = pinf <= pinf ? 42 : 13;
	/* float simulator messes up stack for the compare sequence */
	printf("%f >= %f: %d\n", pinf, ninf, v0);
	printf("%f <= %f: %d\n", pinf, pinf, v1);

	return 0;
}
