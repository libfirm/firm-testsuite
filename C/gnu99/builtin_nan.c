#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

uint32_t float_to_uint32(float val)
{
	uint32_t res;
	memcpy(&res, &val, sizeof(float));
	return res;
}

uint64_t double_to_uint64(double val)
{
	uint64_t res;
	memcpy(&res, &val, sizeof(double));
	return res;
}

int main(void)
{
	assert(isnan(__builtin_nanf("")));
	assert(isnan(__builtin_nan("")));
	assert(isnan(__builtin_nanf("0xCAFEBABE")));
	assert(isnan(__builtin_nan("0xCAFEBABE12345678")));

	/* lets assume we have an ieee754 float representation with float and
	 * integer endianess being the same...*/
	assert(sizeof(float) == 4);
	assert(sizeof(double) == 8);
	assert(float_to_uint32(__builtin_nanf("0xCAFEBABE")) == 0x7ffebabe);
	assert(double_to_uint64(__builtin_nan("0xCAFEBABE12345678")) == 0x7ffebabe12345678ull);
	return 0;
}
