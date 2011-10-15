#include <stdio.h>

static int global1 = 1L;
static int global3 = 0L;

int main(void)
{
	int result = 0;

	if (global1 |= global3)
	{
		for (global3 = 0; global3 < 1; global3++)
		{
		}
	}

	printf("%d\n", global3);

	return 0;
}
