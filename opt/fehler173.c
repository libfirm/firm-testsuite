#include <stdio.h>

void f(unsigned char const a, unsigned char const b)
{
	unsigned ebx = 0;
	for (unsigned i = 0; i != 100; ++i)
	{
		ebx = ebx & 0xFFFFFF00 | a;
		printf("%u\n", ebx);
		ebx = ebx & 0xFFFFFF00 | b;
		printf("%u\n", ebx);
	}
}

unsigned char a = 23;
unsigned char b = 42;

int main(void)
{
	f(a, b);
	return 0;
}
