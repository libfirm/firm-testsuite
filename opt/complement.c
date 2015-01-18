#include <stdio.h>

void f(unsigned a, unsigned b)
{
	if (((a ^ b) & (~a ^ b)) != 0)
		puts("BAD"); /*$ !check BAD $*/
}

int main(void)
{
	return 0;
}
