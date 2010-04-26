#include <stdio.h>

int f(void)
{
	int i;
	asm volatile("xor %0, %0" : "=r" (i));
	return i;
}

int main(void)
{
	return f();
}
