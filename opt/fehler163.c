#include <stdio.h>

double x = 9223372036854775808;
double y = 56;

unsigned long long conv(double v) {
	return (unsigned long long)v;
}

int main(int argc, char *argv[]) {
//	printf("%llu\n", conv(x));
	printf("%llu\n", conv(y));
	return 0;
}
