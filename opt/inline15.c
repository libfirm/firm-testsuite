#include "stdio.h"

int called(int x)
{
	int *ptr = &x;
	x *= 2;
	return x;
}

int main(void)
{
	int result = called(42);
	printf("Result: %i (should be 84)\n", result);
	return result != 84;
}
