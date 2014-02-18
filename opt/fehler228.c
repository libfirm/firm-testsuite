int *adr;

extern int printf(const char *std, ...);

void __attribute__((noinline)) print_adr(void)
{
	printf("%d\n", *adr);
}

void foo(int x)
{
	adr = &x;
	print_adr();
	x = 13;
	print_adr();
}

int max = 3;

int main(void)
{
	for (int i = 0; i < max; ++i) {
		/* When inlining foo you have to create a dummy entity and store to it
		 * so we can correctly take the address of the parameter.
		 * Firm used to use a wrong memory dependency here making it incorrectly
		 * moving the store to 42 out of the loop. */
		foo(42);
	}
	return 0;
}
