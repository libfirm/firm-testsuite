#include <stdio.h>

int a[10];
__typeof__(*&a) b;

int main(void)
{
	printf("%zu %zu\n", sizeof(*&a), sizeof(b));
}
