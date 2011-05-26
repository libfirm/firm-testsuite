/*$ check sh[rl]d $*/
unsigned __attribute__((noinline)) foo(unsigned x, unsigned y)
{
	/* you can use shrd or shld for this */
	return (x << 16) | (y >> 16);
}

extern int printf(const char *str, ...);

int main(void)
{
	printf("%u\n", foo(1, 42));
	printf("%u\n", foo(0xCAFE, 0xBABE));
	return 0;
}
