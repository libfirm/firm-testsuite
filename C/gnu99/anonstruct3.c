#include <assert.h>

#define offsetof(type,member) ( (char*) &(((type*)0)->member) - ((char*)0) )

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
	assert(offsetof(struct bla, a) == offsetof(struct bla, l));
	assert(offsetof(struct bla, k) == 0);
	struct bla b;
	b.a = 42;
	b.b = 42;
	return b.l - b.b;
}
