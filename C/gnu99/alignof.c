#include <stdio.h>

int a;
int __attribute__((aligned(8))) b;
int c __attribute__((aligned(8)));
int __attribute__((aligned(8)))* p;

struct
{
	int i;
} x;

struct
{
	int __attribute__((aligned(8))) i;
} y;

struct
{
	int i __attribute__((aligned(8)));
} z;

struct
{
	int i;
} __attribute__((aligned(8))) v;

struct
{
	int i;
} w __attribute__((aligned(8)));

int main(void)
{
#define M(x) printf("%10s: %zu\n", #x, __alignof__(x));
	M(a);
	M(b);
	M(c);
	M(*p);
	M(a + 0);
	M(b + 0);
	M(c + 0);
	M(*&a);
	M(*&b);
	M(*&c);
	M((&a)[0]);
	M((&b)[0]);
	M((&c)[0]);
	M(x);
	M(x.i);
	M(y);
	M(y.i);
	M(z);
	M(z.i);
	M(v);
	M(v.i);
	M(w);
	M(w.i);
	return 0;
}
