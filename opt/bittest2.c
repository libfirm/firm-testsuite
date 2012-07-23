extern int puts(const char *str);
extern int printf(const char *str, ...);

void __attribute__((noinline)) bittest(unsigned x)
{
	printf("Testing: %x\n", ~x);
	/* the following shouldn't change the tested bits... and
	 * could be left out by the compiler */
	x = ~x;
	x ^= 0x10;
	x ^= 0x08;
	x = ~x;

	if (x & 8)
		puts("0x08 is set");
	if (x & 0x10)
		puts("0x10 is set");
}

int main(void)
{
	bittest(~ 0);
	bittest(~ 0xffffffffu);
	bittest(~ 0x8);
	bittest(~ 0x10);
	bittest(~ 0x12345678);
	return 0;
}
