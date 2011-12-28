#include <stdio.h>

static signed char global = 0;

static void f(void)
{
	global = (1 > global);
}

int main(void)
{
	f();
	printf("%hhd\n", global);

	return 0;
}
