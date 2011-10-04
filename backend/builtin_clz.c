#include <assert.h>

static int __attribute__((noinline)) clz(unsigned x)
{
	return __builtin_clz(x);
}

int main(void)
{
#define ASSERTCLZ(val, result) \
	assert(__builtin_clz(val) == result); \
	assert(clz(val) == result);

	ASSERTCLZ(0x0001U, sizeof(unsigned)*8-1);
	ASSERTCLZ(0x0002U, sizeof(unsigned)*8-2);
	ASSERTCLZ(0x0004U, sizeof(unsigned)*8-3);
	ASSERTCLZ(0x0008U, sizeof(unsigned)*8-4);
	ASSERTCLZ(0x0010U, sizeof(unsigned)*8-5);
	ASSERTCLZ(0x0020U, sizeof(unsigned)*8-6);
	ASSERTCLZ(0x0040U, sizeof(unsigned)*8-7);
	ASSERTCLZ(0x0080U, sizeof(unsigned)*8-8);
	ASSERTCLZ(0x0100U, sizeof(unsigned)*8-9);
	ASSERTCLZ(0x0200U, sizeof(unsigned)*8-10);
	ASSERTCLZ(0x0400U, sizeof(unsigned)*8-11);
	ASSERTCLZ(0x0800U, sizeof(unsigned)*8-12);
	ASSERTCLZ(0x1000U, sizeof(unsigned)*8-13);
	ASSERTCLZ(0x2000U, sizeof(unsigned)*8-14);
	ASSERTCLZ(0x4000U, sizeof(unsigned)*8-15);
	ASSERTCLZ(0x8000U, sizeof(unsigned)*8-16);
	ASSERTCLZ((unsigned)-1, 0);
}
