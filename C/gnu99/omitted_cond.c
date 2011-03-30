extern int printf(const char *str, ...);

static int counter;

int get_some(void)
{
	return counter++;
}

int main(void)
{
	printf("%d\n", get_some() ? : 42);
	printf("%d\n", get_some() ? : 42);
	printf("%d\n", get_some() ? get_some() : 42);

	return 0;
}
