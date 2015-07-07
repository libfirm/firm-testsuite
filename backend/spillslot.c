#include <stdio.h>

char a;
int b;
int c = 32769;
int *d = &c;

int fn1(char p1)
{
	do {
		*d = a;
	} while (!p1);

	return p1;
}

int main(void)
{
	if (a < fn1(b ^ c)) {
		printf("right\n");
	}

	return 0;
}
