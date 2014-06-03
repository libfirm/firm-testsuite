/*$ check[1] mla\s+r[0-9] $*/
unsigned __attribute__((noinline)) mul_add(unsigned x, unsigned y, unsigned z)
{
	return x*y+z;
}

extern int printf(const char *str, ...);

int main(void)
{
	printf("%u\n", mul_add(5, 7, 31));
	return 0;
}
