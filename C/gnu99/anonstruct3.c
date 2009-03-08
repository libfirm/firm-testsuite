#include <assert.h>

struct bla {
	union {
		struct {
			int a, b;
		};
		float k;
	};
};

int main(void)
{
	assert(sizeof(struct bla) == 2*sizeof(int));
	struct bla b;
	b.a = 42;
	b.b = 42;
	return b.a - b.b;
}
