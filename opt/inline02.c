// inline02.c

#include "stdio.h"

typedef struct compound {
	int a;
} compound;

int called(compound param1, compound param2)
{
	param1.a = 21;
	param2.a = 42;
	return 0;
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
