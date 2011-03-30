#include <assert.h>

extern int puts(const char *s);

static const char *fn1;
static const char *fn2;

const char *test1(void) {
	fn1 = __func__;
	fn2 = __func__;
	return __func__;
}

int main(void)
{
	puts(test1());
	assert(fn1 == fn2);
	return 0;
}
