/* cparser creates the struct bar type too early before the members are known
 * and later fails because of missing member entities */
#include <assert.h>

struct bar *joho(void)
{
	struct bar *b = ((struct bar*)0);
	return b;
}

struct bar {
	struct bar *next;
};

void blup(void)
{
	struct bar *b;
	b->next = b;
}

int main(void)
{
	assert(sizeof(struct bar) == sizeof(void*));
	return 0;
}
