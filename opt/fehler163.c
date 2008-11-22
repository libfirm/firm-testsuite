#include <stdio.h>

double x = 9223372036854775808.0;
double y = 56.0;

double u = 9223372036854775808ULL;
double v = 56ULL;

unsigned long long conv(double v) {
	return (unsigned long long)v;
}

double convI(unsigned long  long v) {
	return (double)v;
}

int main(int argc, char *argv[]) {
	printf("%f\n", convI(u));
	printf("%f\n", convI(v));
	printf("%llu\n", conv(x));
	printf("%llu\n", conv(y));
	return 0;
}
