#include <assert.h>
#include <limits.h>

unsigned __attribute__((noinline)) bigger_than_zero(int a)
{
	/* firm (used?) to generate (-a)>>31 here which fails for INT_MIN... */
	return a > 0;
}

int main(void)
{
	assert(bigger_than_zero(INT_MIN) == 0);
	return 0;
}
