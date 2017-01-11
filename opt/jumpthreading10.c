/*$ -O0 -fthread-jumps $*/
#include <stdio.h>
#include <stdlib.h>

// triggers an infinite loop in jump threading (libfirm 1.22.0)

int main() {
	int i = rand();

	if (i < 10) {
		i = 42;
		goto inloop;
	}

	while (i < 100) {
inloop:
		printf(".");
	}

	return 0;
}
