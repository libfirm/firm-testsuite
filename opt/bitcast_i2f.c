#include <stdint.h>
#include <stdio.h>
#include <assert.h>

uint32_t g = 0x410CCCC0;

int main(void)
{
	assert(sizeof(float) == sizeof(uint32_t));
	uint32_t i = 0x4229AE14;
	/* don't try this at home kids: casting uint32_t* to float* and then
	 * dereferncing this float values as an integer is undefined behaviour! */
	float *x = (float*)&i;
	/* this should result in an integer immediate getting passed as arg */
	printf("%.2f\n", *x + 2.);

	uint32_t f = g + 0xD;
	float *y = (float*)&f;
	printf("%.2f\n", *y + 4.);

	return 0;
}
