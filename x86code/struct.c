#include <stdio.h>

struct X {
	int       x;
	long long y;
};

struct Y {
	int    x;
	double y;
};

int main(void)
{
	printf("int + long long %zu\n", sizeof(struct X));
	printf("int + double    %zu\n", sizeof(struct Y));
	return 0;
}
