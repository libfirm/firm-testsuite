/*$ check[1] mls\s+r[0-9] $*/
unsigned __attribute__((noinline)) mul_sub(unsigned x, unsigned y, unsigned z)
{
	return z-x*y;
}

extern int printf(const char *str, ...);

int main(void)
{
	printf("%u\n", mul_sub(5, 7, 31));
	return 0;
}
