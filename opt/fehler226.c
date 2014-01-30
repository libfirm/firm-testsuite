#include <stdio.h>

int x = 1;

short fn2(void)
{
	if (x)
		return 16534;
	return 45483;
}

int main(void)
{
	int a = fn2();
	printf("%d\n", a);

	return 0;
}
