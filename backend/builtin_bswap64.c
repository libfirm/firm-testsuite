#include <assert.h>
#include <stdint.h>

static uint64_t __attribute__((noinline)) bswap64(uint64_t x)
{
	return __builtin_bswap64(x);
}

int main(void)
{
#define ASSERTBSWAP(val, result) \
	assert(__builtin_bswap64(val) == result); \
	assert(bswap64(val) == result);

	ASSERTBSWAP(0, 0);
	ASSERTBSWAP(0xFFFFFFFFFFFFFFFFllu, 0xFFFFFFFFFFFFFFFFllu);
	ASSERTBSWAP(0x12345678CAFEBABEllu, 0xBEBAFECA78563412llu);
	return 0;
}
