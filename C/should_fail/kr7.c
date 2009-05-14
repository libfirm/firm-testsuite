extern int printf(const char *str, ...);

void f(char f);

void f(k)
	int k;
{
	printf("%d\n", k);
}

int main(void)
{
	f(42);
	return 0;
}
