#include "alias_tools.h"

unsigned global;
#define null ((void*)0)
__thread int thread_local_var;

int main(int param0, char **param1)
{
	int local;
	void *malloced = malloc(16);
	escape(&global);
	escape(&param0);
	escape(&local);
	escape(&thread_local_var);
	escape(malloced);

	/* different "classes" which cannot alias */
	int i = 0;
	NOT(&global, &local);
	NOT(&global, &param0);
	NOT(&global, malloced);
	NOT(&global, null);
	NOT(&global, &thread_local_var);
	NOT(&local, &param0);
	NOT(&local, malloced);
	NOT(&local, null);
	NOT(&local, &thread_local_var);
	NOT(&param0, malloced);
	NOT(&param0, null);
	NOT(&param0, &thread_local_var);
	NOT(malloced, null);

	return 0;
}
