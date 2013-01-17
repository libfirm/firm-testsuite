// inline12.c
#include "stdio.h"

int foo(int a, int b, int c);
int bar(int *ptr_a, int *ptr_b, int *ptr_c);

int foo(int a, int b, int c)
{
	int res = bar(&a, &b, &c);
	if (res >= 0) {
		return res;
	}
	return a;
}

int bar(int *ptr_a, int *ptr_b, int *ptr_c)
{
	*ptr_a = 7;
	ptr_b += 4;
	return *ptr_c;
}

int main()
{
	int res =foo(3, 0, 42);
	if (res != 42)
		printf("Test failed!\n");
	return 0;
}
