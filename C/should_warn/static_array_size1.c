#include <stdlib.h>

static void foo(int array[static 10]) {
	(void) array; // suppress unused var compiler warning
	return;
}

int main () {
	foo(NULL);
	return 0;
}
