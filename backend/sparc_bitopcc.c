/* the following should match into "bitopcc, conjump" patterns.
 * Instead of "bitop, cmp, condjmp" */

extern int printf(const char *str, ...);

void __attribute__((noinline)) andzero(unsigned a, unsigned b)
{
	if ((a&b) == 0) printf("andzero\n");
}

void __attribute__((noinline)) orzero(unsigned a, unsigned b)
{
	if ((a|b) == 0) printf("orzero\n");
}

void __attribute__((noinline)) xorzero(unsigned a, unsigned b)
{
	/* well this actually is the same as a==b, so you might not see the
	 * xor with g0 destination */
	if ((a^b) == 0) printf("xorzero\n");
}

void __attribute__((noinline)) andnzero(unsigned a, unsigned b)
{
	if ((a&~b) == 0) printf("andnzero\n");
}

void __attribute__((noinline)) ornzero(unsigned a, unsigned b)
{
	if ((a|~b) == 0) printf("ornzero\n");
}

void __attribute__((noinline)) xnorzero(unsigned a, unsigned b)
{
	if (~(a^b) == 0) printf("xnorzero\n");
}

int main(void)
{
	andzero(0xf, 0xf0);
	andzero(0xf, 0x1);
	orzero(0, 0);
	orzero(0, 15);
	xorzero(0xabcd, 0xabcd);
	xorzero(0xab, 0xcd);
	andnzero(0xf, ~0xf0);
	andnzero(0xf, 0xf0);
	ornzero(0, ~0u);
	ornzero(0, 15);
	xnorzero(0xabcd, ~0xabcd);
	xnorzero(0xab, ~0xcd);
	return 0;
}
