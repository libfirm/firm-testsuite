#include <assert.h>

static int __attribute__((noinline)) parity(unsigned x)
{
	return __builtin_parity(x);
}

int main(void)
{
#define ASSERTPARITY(val, result) \
	assert(__builtin_parity(val) == result); \
	assert(parity(val) == result);

	ASSERTPARITY(0x0000, 0);
	ASSERTPARITY(0x0001, 1);
	ASSERTPARITY(0x3000, 0);
	ASSERTPARITY(0x0031, 1);
	ASSERTPARITY(0x2222, 0);
	ASSERTPARITY(0x1055, 1);
	ASSERTPARITY(0x6116, 0);
	ASSERTPARITY(0x7107, 1);
	ASSERTPARITY(0x8778, 0);
	ASSERTPARITY(0x7999, 1);
	ASSERTPARITY(0xFFA0, 0);
	ASSERTPARITY(0x7FCC, 1);
	ASSERTPARITY(0xCFFC, 0);
	ASSERTPARITY(0x7CFF, 1);
	ASSERTPARITY(0x7FFE, 0);
	ASSERTPARITY(0xF7FF, 1);
	ASSERTPARITY(0xFFFF, 0);
	ASSERTPARITY((unsigned)-1, 0);
	ASSERTPARITY((unsigned)-2, 1);
}
