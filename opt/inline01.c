// inline01.c

#include <stdio.h>

typedef struct compound {
	int a;
} compound;

int called(compound param)
{
	param.a = -4;
	return 0;
}

int callee()
{
	compound local;
	local.a = 6;
	called(local);

	if(!local.a == 6) {
		printf("Test failed!");
	}
	return 0;
}

int main()
{
	callee();
	return 0;
}
