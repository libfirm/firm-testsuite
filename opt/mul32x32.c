#include <stdio.h>

long a = 0x7FFFFFFF, b = -2;
unsigned long ua = 0x7FFFFFFF, ub = 2;

long long mulS(long a, long b) {
	return (long long)a * (long long)b;
}

unsigned long long mulU(unsigned long a, unsigned long b) {
	return (unsigned long long)a * (unsigned long long)b;
}

int main(int argc, char *argv[]) {
	printf("%lld\n", mulS(a, b));
	printf("%llu\n", mulU(ua, ub));
	return 0;
}
