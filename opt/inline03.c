// inline03.c

#include "stdio.h"

typedef struct compound {
	int a;
} compound;

int called(compound param1, compound param2)
{
	param1.a = 21;
	param2.a = 42;

	int i, res = 0;
	for (i=0; i < param1.a; ++i) {
		res += i;
	}

	return res;
}

int callee()
{
	compound local;
	local.a = 0;

	called(local, local);

	return local.a;
}

int main()
{
	int res = callee();
	if (res != 0) {
		printf("Test failed!\n");
	}

	return 0;
}
