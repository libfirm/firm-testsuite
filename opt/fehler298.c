#include <limits.h>

unsigned short a;

int main(void)
{
	a = -(a | 4);
	return a >= USHRT_MAX;
}
