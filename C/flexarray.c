#include <stddef.h>
#include <assert.h>

struct s { char n; double d[]; };
struct ss { char n; double d[1]; };

int main(void)
{
	assert(sizeof(struct s) == offsetof(struct s, d));
	assert(sizeof(struct s) == offsetof(struct ss, d));
	return 0;
}
