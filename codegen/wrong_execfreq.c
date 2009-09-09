#include <stdlib.h>

int l;
volatile int k;
int l2;

int foo(void)
{

	for (int i = 0; i < l; ++i) {
		for (int i2 = 0; i2 < i; ++i2) {
			k = i2;
		}
		if (i == k || i == l2) {
			exit(0);
		}
	}

	for (int i = 0; i < l; ++i) {
		l2 = i;
		if (i == k || i == l2) {
			exit(0);
		}
	}

	return 1;
}
