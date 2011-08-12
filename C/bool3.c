#include <stdio.h>

unsigned even = 0;

int main(void)
{
	const _Bool bit = even & 1;

	printf("%x\n", bit);

	return 0;
}

