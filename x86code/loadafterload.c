/*$ check movsbl\s+\( $*/
#include <stdbool.h>

char c = 42;

int f(void* p, bool x)
{
	int res = *(char*)p;
	if (x)
		res = *(int*)p;
	return res;
}

int main(void)
{
	f(&c, false);
	return 0;
}
