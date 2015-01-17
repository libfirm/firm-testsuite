#include <stdio.h>

void __attribute__((noinline)) f(float volatile* f0)
{
	*f0;
}

int main(void)
{
	float v = 23;
	f(&v);
	unsigned char fenv[28];
	asm volatile("fnstenv %0" : "=m" (fenv));
	return fenv[9] != 0xFF;
}
