#include <stdio.h>

static unsigned fak(unsigned n)
{
	if (n == 0)
		return 1;

	return n * fak(n - 1);
}


int main(int argc, char *argv[])
{
	unsigned x = 12;

	printf("fak(%u) = %u\n", x, fak(x));

	return 0;
}
