#include <stdio.h>

int g;

int __attribute__((noinline)) foo(int x, int *f)
{
	/* make sure the address of "g" is already constructed. */
	int l = g;
	*f = 0;
	/* a delayslot for the *f = 0, so the one at the if() is still free */
	rand();
	if (x < 5) {
		/* libfirm used to put the store to g into the delayslot of the
		 * if-cond */
		g = 0;
		return l;
	}
	return l;
}

int main(void)
{
	int l;
	g = 42;
	foo(10, &l);
	printf("%d (should be 42)\n", g);
	g = 42;
	foo(1, &l);
	printf("%d (should be 0)\n", g);
	return 0;
}
