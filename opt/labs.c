#include <stdio.h>

long long x = -3;

long long mylabs(long long x) {
	if (x < 0)
		return -x;
	return x;
}

int main(int argc, char *argv[]) {
	printf("%lld\n", mylabs(x));
}
