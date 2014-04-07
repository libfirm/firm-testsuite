#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>
#include <assert.h>

double gf  = 8.8;
double gf2 = 9.9;
uint64_t gi  = UINT64_C(0x401199999999999A);
uint64_t gi2 = UINT64_C(0x0000666666666666);

int main(void)
{
	assert(sizeof(double) == sizeof(uint64_t));

	double f = 42.42;
	/* don't try this at home kids: casting float* to unsigned* and then
	 * dereferncing this float values as an integer is undefined behaviour! */
	uint64_t *x = (uint64_t*)&f;
	/* this should result in an integer immediate getting passed as arg */
	printf("%" PRIX64 "\n", *x);

	uint64_t *y = (uint64_t*)&gf;
	printf("%.2f - %" PRIX64 "\n", gf, *y);

	uint64_t *z = (uint64_t*)&gf2;
	printf("%" PRIX64 "\n", *z);

	uint64_t i = UINT64_C(0x404535C28F5C28F6);
	double *a = (double*)&i;
	printf("%.2f\n", *a);

	double *b = (double*)&gi;
	printf("%.2f\n", *b + 2.);

	uint64_t gi3 = UINT64_C(0xC00A000000000000) + gi2;
	double *c = (double*)&gi3;
	printf("%.2f\n", *c + 3.);

	return 0;
}
