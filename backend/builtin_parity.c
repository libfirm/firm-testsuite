#include <assert.h>

static int __attribute__((noinline)) parity(unsigned x)
{
	return __builtin_parity(x);
}

int main(void)
{
#define ASSERTP(val, result) \
	assert(__builtin_parity(val) == result); \
	assert(parity(val) == result);

	ASSERTP(0, 0);
	ASSERTP(1, 1);
	ASSERTP(2, 1);
	ASSERTP(3, 0);
	ASSERTP(4, 1);
	ASSERTP(5, 0);
	ASSERTP(6, 0);
	ASSERTP(7, 1);
	ASSERTP(8, 1);
	ASSERTP(9, 0);
	ASSERTP(10, 0);
	ASSERTP(16, 1);
	ASSERTP(512, 1);
	ASSERTP(6774, 0);
	ASSERTP(26348, 1);
	ASSERTP(10203, 0);
	ASSERTP((unsigned)-1, 0);
	ASSERTP((unsigned)-2, 1);
}
