extern int printf(const char *str, ...);

void __attribute__((noinline)) foob(void *a, int b, int c)
{
	printf("%d\n", a && b && c);
}

char b;

int main(void)
{
	foob(&b, 0, 1);
	return 0;
}
