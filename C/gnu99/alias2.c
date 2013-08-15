extern int printf(const char *str, ...);

void foo(void)
{
	int k;
	/* this is an edge-case: we have an actual function definition (as alias)
	 * inside another function. IMO this should work and provide a definition,
	 * gcc/clang do not treat is as a definition. */
	void __attribute__((alias("bar"))) blup(void);
	blup();
}

void bar(void)
{
	printf("In Bar\n");
}

int main(void)
{
	foo();
	return 0;
}
