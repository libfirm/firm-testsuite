#include <assert.h>

static int __attribute__((noinline)) popcount(unsigned x)
{
	return __builtin_popcount(x);
}

int main(void)
{
#define ASSERTPOPCOUNT(val, result) \
	assert(__builtin_popcount(val) == result); \
	assert(popcount(val) == result);

	ASSERTPOPCOUNT(0x0000, 0);
	ASSERTPOPCOUNT(0x0001, 1);
	ASSERTPOPCOUNT(0x3000, 2);
	ASSERTPOPCOUNT(0x0031, 3);
	ASSERTPOPCOUNT(0x2222, 4);
	ASSERTPOPCOUNT(0x1055, 5);
	ASSERTPOPCOUNT(0x6116, 6);
	ASSERTPOPCOUNT(0x7107, 7);
	ASSERTPOPCOUNT(0x8778, 8);
	ASSERTPOPCOUNT(0x7999, 9);
	ASSERTPOPCOUNT(0xFFA0, 10);
	ASSERTPOPCOUNT(0x7FCC, 11);
	ASSERTPOPCOUNT(0xCFFC, 12);
	ASSERTPOPCOUNT(0x7CFF, 13);
	ASSERTPOPCOUNT(0x7FFE, 14);
	ASSERTPOPCOUNT(0xF7FF, 15);
	ASSERTPOPCOUNT(0xFFFF, 16);
	ASSERTPOPCOUNT((unsigned)-1, sizeof(unsigned)*8);
}
