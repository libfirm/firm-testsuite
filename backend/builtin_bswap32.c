#include <assert.h>
#include <stdint.h>

static uint32_t __attribute__((noinline)) bswap32(uint32_t x)
{
	return __builtin_bswap32(x);
}

int main(void)
{
#define ASSERTBSWAP(val, result) \
	assert(__builtin_bswap32(val) == result); \
	assert(bswap32(val) == result);

	ASSERTBSWAP(0, 0);
	ASSERTBSWAP(0xFFFFFFFFu, 0xFFFFFFFFu);
	ASSERTBSWAP(0xCAFEBABEu, 0xBEBAFECAu);
	return 0;
}
