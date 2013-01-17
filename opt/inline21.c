// inline21.c

#include "stdio.h"

typedef struct compound {
	int a, b, c;
} compound;

compound called()
{
	compound local;
	local.a = 42;
	local.b = 21;
	return local;
}

void callee()
{
	compound ret;
	ret = called();
	if (ret.a != 42 || ret.b != 21) {
		printf("Test failed");
	}
}

int main()
{
	callee();
	return 0;
}
