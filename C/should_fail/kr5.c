extern int printf(const char *str, ...);

static void foo(double b);

int main(void)
{
	foo(42.42);
	return 0;
}

static void foo(b)
	int b;
{
	printf("%d\n", b);
}
