extern int printf(const char *str, ...);

unsigned __attribute__((noinline)) foo(unsigned a, unsigned b)
{
	return a >= b ? a-b : 0;
}

int main(void)
{
	printf("foo(0,1) = %u\n", foo(0, 1));
	printf("foo(1,0) = %u\n", foo(1, 0));
	printf("foo(42,13) = %u\n", foo(42, 13));
	printf("foo(13,42) = %u\n", foo(13, 42));
	return 0;
}
