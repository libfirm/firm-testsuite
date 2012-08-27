#include <assert.h>

unsigned char gc;
int g;

void __attribute__((noinline)) foo(int x, int y)
{
	/* libfirm had a bug where the backend assume that the result of a Mux node
	 * (x<y?0:1) has 'clean'(=0) upper bits if the true/false input are clean.
	 * Unfortunately this is not true if the ia32 Set instruction is used. */
	unsigned char f = (unsigned char)(x<y ? 0: 1);
	f ^= gc;
	g = f;
}

int main(void)
{
	gc = 0xff;
	foo(4, 2);
	assert(g == 0xfe);
	return 0;
}
