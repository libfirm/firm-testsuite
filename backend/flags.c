#include <stdio.h>

static int global1 = 1L;
static int global3 = 0L;

int main(void)
{
	int result = 0;

	/**
	 * x86 peephole optimizations removed a test instruction here because the
	 * result of the Or was still available, but after that incorrectly
	 * transformed a mov 0, reg between the test and the or into a xorl which
	 * destroys that flag.
	 */
	if (global1 |= global3)
	{
		for (global3 = 0; global3 < 1; global3++)
		{
		}
	}

	printf("%d\n", global3);

	return 0;
}
