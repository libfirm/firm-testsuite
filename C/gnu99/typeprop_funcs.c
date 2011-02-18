#include <assert.h>

int foobar(int x)
{
	return x*x;
}

static const unsigned size_foobar = sizeof(foobar);
static const unsigned align_foobar = __alignof(foobar);

int main(void)
{
	/* strange gcc extension: return 1 for sizeof/alignof */
	assert(size_foobar == 1);
	assert(align_foobar == 1);
	return 0;
}
