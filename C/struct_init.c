#include <stdio.h>

int main(void)
{
	char c[1];
	struct { char *c; unsigned i; } s = { c };

	printf("%d\n", s.i);

	return 0;
}
