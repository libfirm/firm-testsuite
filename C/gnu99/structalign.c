#include <stdio.h>

struct X
{
	int i;
};

struct __attribute__((aligned(8))) X x;

struct Y
{
	int i __attribute__((aligned(8)));
} __attribute__((packed));

struct Z
{
	int i;
} __attribute__((packed));

struct W
{
	int i __attribute__((aligned(8)));
} w;

struct S
{
	short a;
	int   b;
	struct T {
		int c;
	} c;
} __attribute__((packed, aligned(4))) s;

int main(void)
{
#define M(x) printf("%10s: size: %zu align: %zu\n", #x, sizeof(x), __alignof__(x))
	M(struct X);
	M(x);
	M(struct Y);
	M(struct Z);
	M(struct W);
	M(w.i);
	M(s.b);
	M(s.c);
	M(struct T);
	return 0;
}
