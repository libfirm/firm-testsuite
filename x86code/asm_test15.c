#include <stdio.h>

int main(void)
{
	unsigned long long a;
	unsigned           v = 0xC0FFEE;
	asm(
		"mov $0xDEADBEEF, %%eax\n"
		"mov $0xCAFEBABE, %%edx\n"
		"bswap %%ecx"
		: "=A" (a), "+c" (v)
	);
	printf("%llX %X\n", a, v);
	return 0;
}
