#include <stdio.h>

int main(void)
{
	int x = 23;
	if ((1 && x) > 1)
		puts("bad");
	return 0;
}
