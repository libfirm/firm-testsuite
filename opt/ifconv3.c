#include <stdlib.h>

int a = 0;
int b = 0;

void foo(void)
{
	if (rand ())
	{
		for (; b; b++)
			label: srand(a >= 0 ^ 0 && 1);

		goto label;
	}
}

int main(void)
{
	return 0;
}
