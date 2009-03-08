#include <assert.h>

struct bla {
	union {
		struct {
			int a;
			int b;
		} s1;
		struct {
			int l;
			int l2;
		} s2;
	} u;
};

int main(void)
{
	struct bla b;
	b.u.s1.a = 42;
	b.u.s1.b = 42;
	return b.u.s2.l - b.u.s1.b;
}
