#include <stdio.h>

typedef struct compound {
	int a, b, c;
} compound;

int foo(compound x, compound y)
{
	return x.a * y.a + x.b * y.b + x.c * y.c;
}

compound cons()
{
	compound local;
	local.a = 10;
	local.b = 20;
	local.c = 30;
	return local;
}

int main()
{
	printf("result: %d\n", foo(cons(), cons()));
	return 0;
}
