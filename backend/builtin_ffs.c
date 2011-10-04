#include <assert.h>

int __attribute__((noinline)) ffs(unsigned x)
{
	return __builtin_ffs(x);
}

int main(void)
{
#define ASSERTFFS(v, result)             \
	assert(ffs(v) == result);            \
	assert(__builtin_ffs(v) == result);

	ASSERTFFS(0x0000U, 0);
	ASSERTFFS(0x0001U, 1);
	ASSERTFFS(0x0002U, 2);
	ASSERTFFS(0x0004U, 3);
	ASSERTFFS(0x0008U, 4);
	ASSERTFFS(0x0010U, 5);
	ASSERTFFS(0x0020U, 6);
	ASSERTFFS(0x0040U, 7);
	ASSERTFFS(0x0080U, 8);
	ASSERTFFS(0x0100U, 9);
	ASSERTFFS(0x0200U, 10);
	ASSERTFFS(0x0400U, 11);
	ASSERTFFS(0x0800U, 12);
	ASSERTFFS(0x1000U, 13);
	ASSERTFFS(0x2000U, 14);
	ASSERTFFS(0x4000U, 15);
	ASSERTFFS(0x8000U, 16);
	ASSERTFFS((unsigned)-1, 1);
}
