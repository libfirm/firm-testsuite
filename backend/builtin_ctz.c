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

	ASSERTCTZ(0x0001U, 0);
	ASSERTCTZ(0x0002U, 1);
	ASSERTCTZ(0x0004U, 2);
	ASSERTCTZ(0x0008U, 3);
	ASSERTCTZ(0x0010U, 4);
	ASSERTCTZ(0x0020U, 5);
	ASSERTCTZ(0x0040U, 6);
	ASSERTCTZ(0x0080U, 7);
	ASSERTCTZ(0x0100U, 8);
	ASSERTCTZ(0x0200U, 9);
	ASSERTCTZ(0x0400U, 10);
	ASSERTCTZ(0x0800U, 11);
	ASSERTCTZ(0x1000U, 12);
	ASSERTCTZ(0x2000U, 13);
	ASSERTCTZ(0x4000U, 14);
	ASSERTCTZ(0x8000U, 15);
	ASSERTCTZ((unsigned)-1, 0);
}
