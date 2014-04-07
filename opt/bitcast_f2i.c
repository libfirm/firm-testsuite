#include <stdint.h>
#include <assert.h>
#include <inttypes.h>

extern int printf(const char *str, ...);
float gf = 8.8;
float gf2 = 9.9;

int main(void)
{
	assert(sizeof(float) == sizeof(uint32_t));
	float f = 42.42;
	/* don't try this at home kids: casting float* to unsigned* and then
	 * dereferncing this float values as an integer is undefined behaviour! */
	uint32_t *x = (uint32_t*)&f;
	/* this should result in an integer immediate getting passed as arg */
	printf("%" PRIX32 "\n", *x);

	uint32_t *y = (uint32_t*)&gf;
	printf("%.2f - %" PRIX32 "\n", gf, *y);

	uint32_t *z = (uint32_t*)&gf2;
	printf("%" PRIX32 "\n", *z);

	return 0;
}
