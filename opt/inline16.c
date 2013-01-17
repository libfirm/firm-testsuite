#include "stdio.h"

static void called(int* ptr)
{
	printf("%d\n", *ptr);
}

static void callee(int a0, int a1, int a2)
{
	called(&a0);
	called(&a1);
	called(&a2);
}

int main()
{
	callee(1, 21, 42);
	return 0;
}
