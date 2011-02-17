#include <assert.h>

int __attribute__((noinline)) ffs(int x)
{
	return __builtin_ffs(x);
}

int main(void)
{
#define FFSASSERT(v, result)             \
	assert(ffs(v) == result);            \
	assert(__builtin_ffs(v) == result);

	FFSASSERT(0, 0);
	FFSASSERT(1, 1);
	FFSASSERT(2, 2);
	FFSASSERT(4, 3);
	FFSASSERT(8, 4);
	FFSASSERT(9, 1);
	FFSASSERT(10, 2);
	FFSASSERT(11, 1);
	FFSASSERT(12, 3);
	FFSASSERT(16, 5);
	FFSASSERT(64, 7);
	FFSASSERT(576, 7);
	FFSASSERT(144, 5);
	FFSASSERT(-1, 1);
}
