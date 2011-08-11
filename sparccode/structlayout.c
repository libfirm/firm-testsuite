#include <assert.h>

typedef struct {
	char c;
	double d;
	short s;
} A;

int main(void)
{
	/* padding/sizeof for sparc v8 */
	assert(__builtin_offsetof(A, c) == 0);
	assert(__builtin_offsetof(A, d) == 8);
	assert(__builtin_offsetof(A, s) == 16);
	assert(sizeof(A) == 24);
	return 0;
}
