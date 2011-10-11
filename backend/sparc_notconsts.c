unsigned __attribute__((noinline)) f_and(unsigned x)
{
	/* on sparc this should be: sethi(0xffc000000), andn */
	return x & 0x3fffff;
}

unsigned __attribute__((noinline)) f_or(unsigned x)
{
	/* on sparc this should be: sethi(0xffc000000), orn */
	return x | 0x3fffff;
}

unsigned __attribute__((noinline)) f_xor(unsigned x)
{
	/* on sparc this should be: sethi(0xffc000000), xorn */
	return x ^ 0x3fffff;
}

extern int printf(const char *str, ...);

int main(void)
{
	printf("Res: %x %x %x\n", f_and(0), f_and(0xffffffffu), f_and(42));
	printf("Res: %x %x %x\n", f_or(0),  f_or(0xffffffffu),  f_or(42));
	printf("Res: %x %x %x\n", f_xor(0), f_xor(0xffffffffu), f_xor(42));
	return 0;
}
