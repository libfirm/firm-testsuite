#include <stdio.h>

__attribute__((noinline))
void bar(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	printf("foo\n");
}

int g = 8;

int main()
{
	char foo[g];
	foo[0] = 42;
	foo[1] = 43;
	foo[2] = 44;

	/* SPARC backend did not pass parameters on the stack correctly
	 * after an alloca/VLA. */
	bar(10, 20, 30, 40, 50, 60, 70, 80, 90);

	printf("%d %d %d\n", foo[0], foo[1], foo[2]);
	return 0;
}
