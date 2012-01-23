static unsigned __attribute__((noinline)) convert(double d)
{
	return d;
}

extern int printf(const char *str, ...);

int main(void)
{
	printf("%u\n", convert(0));
	printf("%u\n", convert(42));
	printf("%u\n", convert(13));
	printf("%u\n", convert(1000));
	printf("%u\n", convert(2147483647.));
	printf("%u\n", convert(2147483648.));
	printf("%u\n", convert(2147483649.));
	printf("%u\n", convert(4294967295.));
	/* overflow is undefined behaviour */
	//printf("%u\n", convert(10e100));
	return 0;
}
