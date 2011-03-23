extern int printf(const char *str, ...);

int __thread i[10];
int __thread a;
int *ptr;

static void __attribute__((noinline)) set_ptr(int p)
{
	ptr = &i[p];
}

static void __attribute__((noinline)) set_ptr2(void)
{
	ptr = &a;
}

int main(void)
{
	i[5] = 42;
	set_ptr(5);
	printf("Res: %d (should be 42)\n", *ptr);
	a = 13;
	set_ptr2();
	printf("Res2: %d (should be 13)\n", *ptr);
	return 0;
}
