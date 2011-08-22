#include <stdio.h>

struct S
{
	int i;
};

/* Pass a struct by value. */
int bar(struct S s)
{
	return s.i;
}

int main()
{
	struct S s;
	s.i = 42;
	printf("%d\n", bar(s));

	return 0;
}
