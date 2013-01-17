// inline00.c

#include <stdio.h>

typedef struct compound {
	int a;
} compound;

int called(compound param)
{
	return 0;
}

int callee()
{
	compound local;
	local.a = 6;
	int res = called(local);

	return 0;
}

int main()
{
	return 0;
}
