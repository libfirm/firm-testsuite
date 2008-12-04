#include <stdio.h>

long double ltest(int a) {
	if (a < 0)
		return 4.0/3.0;
	else
		return 2.0/3.0;
}

double test(int a) {
	if (a < 0)
		return 4.0/3.0;
	else
		return 2.0/3.0;
}

static int x;

int main(int argc, char *argv[]) {
	printf("%Lg\n", ltest(x));
	printf("%g\n", test(x));
	return 0;
}
