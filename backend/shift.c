#include <stdio.h>

char a;
unsigned short b;

int id(short p1)
{
	return p1;
}

int main(void)
{
	int c = id(a <= 0);
	b = -c;

	printf("%hu\n", b);

	return 0;
}
