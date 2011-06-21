#include <stdio.h>

typedef struct count_t {
	int dummy;
} count_t;

struct F {
	count_t count;
	int len;
};

extern struct F* getF(void);

static void foobar(void)
{
	struct F *var = 0, tmp;
	tmp.count.dummy = 42;
	/* cparser produced invalid "variable 'var' is never read" warning here
	 * although it is clearly read here */
	var->count = tmp.count;
}

int main(void)
{
	(void) foobar;
	return 0;
}
