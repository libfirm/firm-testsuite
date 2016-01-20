#include <assert.h>

struct bla {
	union {
		struct {
			int a, b;
		};
		float k;
		int l;
	};
};

int main(void)
{
	assert(sizeof(struct bla) == 2*sizeof(int));
	assert(__builtin_offsetof(struct bla, a) == __builtin_offsetof(struct bla, l));
	assert(__builtin_offsetof(struct bla, k) == 0);
	struct bla b;
	b.a = 42;
	b.b = 42;
	return b.l - b.b;
}
