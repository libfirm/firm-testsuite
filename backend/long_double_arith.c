extern int printf(const char *str, ...);

long double __attribute__((noinline)) add(long double a, long double b)
{
	return a + b;
}

long double __attribute__((noinline)) sub(long double a, long double b)
{
	return a - b;
}

long double __attribute__((noinline)) mul(long double a, long double b)
{
	return a * b;
}

long double __attribute__((noinline)) div(long double a, long double b)
{
	return a / b;
}

int main(void)
{
	printf("%Lf\n", add(5, 5));
	printf("%Lf\n", sub(42, 13));
	printf("%Lf\n", mul(-2, 2));
	printf("%Lf\n", div(32, -2));
	return 0;
}
