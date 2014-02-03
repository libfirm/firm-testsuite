#include "alias_tools.h"

static unsigned global;
#define null ((void*)0)
static __thread thread_local_var;

char *ptr;

int main(int param0, char **param1)
{
	int local;
	void *malloced = malloc(16);

	/* no addresses escaped, so the global pointer should not alias anything */
	int i = 0;
	NOT(ptr, &global);
	NOT(ptr, &thread_local_var);
	NOT(ptr, &param0);
	NOT(ptr, &local);
	NOT(ptr, null);

	MAY(ptr, &ptr);

	return 0;
}
