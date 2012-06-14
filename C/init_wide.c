#include <stdio.h>

#define BLA L"ḆŁÄ"
int bla[] = BLA;

int main(void)
{
	printf("%zu %zu\n", sizeof(BLA) / sizeof(*BLA), sizeof(bla) / sizeof(*bla));
	return 0;
}
