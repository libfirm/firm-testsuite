#include <stdint.h>
#include <limits.h>

#if (INTPTR_MAX == INT_MAX) && (INTPTR_MIN == INT_MIN)
int qftol(void) {
	return 0;
}

static int ftolPtr = (int) qftol;
#endif

int main(void) {
	return 0;
}
