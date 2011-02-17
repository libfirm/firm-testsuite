#include <assert.h>

static int __attribute__((noinline)) ctz(unsigned x)
{
	return __builtin_ctz(x);
}

int main(void)
{
#define ASSERTCTZ(val, result) \
	assert(__builtin_ctz(val) == result); \
	assert(ctz(val) == result);

	ASSERTCTZ((unsigned)-1, 0);
	ASSERTCTZ(1, 0);
	ASSERTCTZ(2, 1);
	ASSERTCTZ(3, 0);
	ASSERTCTZ(4, 2);
	ASSERTCTZ(5, 0);
	ASSERTCTZ(6, 1);
	ASSERTCTZ(7, 0);
	ASSERTCTZ(8, 3);
	ASSERTCTZ(9, 0);
	ASSERTCTZ(10, 1);
	ASSERTCTZ(16, 4);
	ASSERTCTZ(512, 9);
}
