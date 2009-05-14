extern int printf(const char *str, ...);

static void foo(double b);

int main(void)
{
	foo(42.42);
	return 0;
}

static void foo(b)
	float b;
{
	printf("%f\n", b);
}
