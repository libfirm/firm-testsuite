#include <stdio.h>

int i = 0;

void f(int y, int *p)
{
	int r = i -= y;
	*p += 42;
	if (r)
		puts("bla");
}

int main(void)
{
	return 0;
}
