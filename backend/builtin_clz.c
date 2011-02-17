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

	ASSERTCLZ((unsigned)-1, 0);
	ASSERTCLZ(1, sizeof(unsigned)*8-1);
	ASSERTCLZ(2, sizeof(unsigned)*8-2);
	ASSERTCLZ(3, sizeof(unsigned)*8-2);
	ASSERTCLZ(4, sizeof(unsigned)*8-3);
	ASSERTCLZ(5, sizeof(unsigned)*8-3);
	ASSERTCLZ(6, sizeof(unsigned)*8-3);
	ASSERTCLZ(7, sizeof(unsigned)*8-3);
	ASSERTCLZ(8, sizeof(unsigned)*8-4);
	ASSERTCLZ(9, sizeof(unsigned)*8-4);
	ASSERTCLZ(10, sizeof(unsigned)*8-4);
	ASSERTCLZ(16, sizeof(unsigned)*8-5);
	ASSERTCLZ(512, sizeof(unsigned)*8-10);
}
