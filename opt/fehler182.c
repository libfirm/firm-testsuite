#include <stdlib.h>

int __attribute__((noinline)) trunc_int_for_mode(int x)
{
	rand();
	return 0;
}

const unsigned short mode_bitsize;
int bla = 1;

static void simplify_comparison(int code, int pop1)
{
	while (1)
	{
		unsigned int mode_width = mode_bitsize;

		if (trunc_int_for_mode(pop1) && (code == 1) && mode_width <= (8 * 8))
		{
			pop1 = 0;
		}

		if ((((long long) 1 << (mode_width - 1))) == 0)
			break;

		if (bla)
			break;
	}
}

int main(void)
{
	simplify_comparison(0, 0);
	return 0;
}
