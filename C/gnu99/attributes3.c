#include <assert.h>

int normal;

typedef int ta __attribute__((aligned(128))), tb;
ta a;
tb b;
tb c __attribute__((aligned(64)));
__typeof__(a) d;
__typeof__(c) e;
__typeof__(c) __attribute__((aligned(32))) f;
tb __attribute__((aligned(16))) g;
__typeof__(g) h;
typedef int __attribute__((aligned(16))) dummy, tc;
tc i;
__typeof__(i) j;
__attribute__((aligned(64))) int k;
__typeof__(k) l;
ta __attribute__((aligned(16))) m;

struct { int x; } __attribute__((aligned(64))) n;

int main(void)
{
	assert(__alignof__(a) == 128);
	assert(__alignof__(b) == __alignof__(normal));
	assert(__alignof__(c) == 64);
	assert(__alignof__(d) == 128);
	assert(__alignof__(e) == __alignof__(normal));
	assert(__alignof__(f) == 32);
	assert(__alignof__(g) == 16);
	assert(__alignof__(h) == __alignof__(normal));
	assert(__alignof__(i) == 16);
	assert(__alignof__(j) == 16);
	assert(__alignof__(k) == 64);
	assert(__alignof__(l) == __alignof__(normal));
	assert(__alignof__(m) == 16);
	assert(__alignof__(n) == 64);

	return 0;
}
