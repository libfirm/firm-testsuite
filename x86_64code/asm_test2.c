#include <stdio.h>

unsigned __attribute__((noinline)) fn1(unsigned x)
{
	__asm__("bswap %0" : "+r" (x));
	return x;
}

int main(void)
{
	printf("%x\n", fn1(0xefbeadde));
	return 0;
}
