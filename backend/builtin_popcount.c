#include <assert.h>

static int __attribute__((noinline)) popcount(unsigned x)
{
	return __builtin_popcount(x);
}

int main(void)
{
#define ASSERTPC(val, result) \
	assert(__builtin_popcount(val) == result); \
	assert(popcount(val) == result);

	ASSERTPC(0, 0);
	ASSERTPC(1, 1);
	ASSERTPC(2, 1);
	ASSERTPC(3, 2);
	ASSERTPC(4, 1);
	ASSERTPC(5, 2);
	ASSERTPC(6, 2);
	ASSERTPC(7, 3);
	ASSERTPC(8, 1);
	ASSERTPC(9, 2);
	ASSERTPC(10, 2);
	ASSERTPC(16, 1);
	ASSERTPC(512, 1);
	ASSERTPC(6774, 8);
	ASSERTPC(26348, 9);
	ASSERTPC(10203, 10);
	ASSERTPC((unsigned)-1, sizeof(unsigned)*8);
}
