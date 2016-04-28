#include <stdio.h>

static struct {
	unsigned f : 1;
} s;

int main(void)
{
	printf("%u\n", s.f);
	return 0;
}
