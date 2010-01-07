#include <stdio.h>

int x = -236478488;
int y = 1773546;

int main(int argc, char* argv[])
{
	long long          a = (long long)x;
	long long          b = (long long)y;
	unsigned long long c = (unsigned long long)a;
	unsigned long long d = (unsigned long long)b;

	printf("Signed:   a / b = %i\n",  (int)(a / b));
	printf("Unsigned: a / b = %i\n",  (int)(c / d));
	printf("Signed:   a %% b = %i\n",  (int)(a % b));
	printf("Unsigned: a %% b = %i\n",  (int)(c % d));

	return 0;
}
