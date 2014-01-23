#include <stdio.h>

int a;

void fn1(void)
{
}

short fn2(void)
{
	if (fn1)
		return 16534;
	return 45483;
}

int main(void)
{
	a = fn2();
	printf("%d\n", a);

	return 0;
}
