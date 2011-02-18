#include <assert.h>

static int l = 42;

int main(void)
{
	/* combo ignores attributes */
#ifdef __i386__
	int val0;
	int val1;
	asm("movl $42, %0" : "=r"(val0) );
	asm("movl $10, %0" : "=r"(val1) );
	assert(val0 == 42);
	assert(val1 == 10);
#endif

	return 0;
}
