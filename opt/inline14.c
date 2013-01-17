// inline12.c
#include "stdio.h"

int foo(int a, int b, int c);
int bar(int *ptr_a, int *ptr_b);

int foo(int a, int b, int c)
{
	int res = bar(&a, &c);
	if (b >= 0) {
		return res;
	}
	return a;
}

int bar(int *ptr_a, int *ptr_c)
{
	*ptr_a = 7;
	ptr_c += 4;
	return 42;
}

int main()
{
	int res =foo(3, 0, 42);
	if (res != 42)
		printf("Test failed!\n");
	return 0;
}
