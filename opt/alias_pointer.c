#include "alias_tools.h"

static unsigned global;
#define null ((void*)0)
static __thread thread_local_var;

char *ptr;

int main(int param0, char **param1)
{
	int local;
	void *malloced = malloc(16);
	escape(&global);
	escape(&param0);
	escape(&local);
	escape(&thread_local_var);
	escape(malloced);

	/* the external pointer may alias anything (all the addresses
	 * escaped) */
	int i = 0;
	MAY(ptr, &global);
	MAY(ptr, &thread_local_var);
	MAY(ptr, &ptr);
	MAY(ptr, &param0);
	MAY(ptr, &local);
	MAY(ptr, malloced);
	NOT(ptr, null);

	return 0;
}
