#include <math.h>
#include <assert.h>

char a;
char b;

/* cmp1 and cmp2 incorrectly created SetccMem commands in ia32 backend
   which ignored NANs */

void __attribute__((noinline)) cmp1(float ca, float cb)
{
	a = (ca == cb);
}

void __attribute__((noinline)) cmp2(float ca, float cb)
{
	b = (ca != cb);
}

int main(void)
{
	cmp1(NAN, 4);
	cmp2(NAN, NAN);

	assert(a == 0);
	assert(b == 1);
	return 0;
}
