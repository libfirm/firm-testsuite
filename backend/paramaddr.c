int printf(const char *str, ...);

static void __attribute__((noinline)) print_addr(int* addr)
{
	printf("%d\n", *addr);
}

static void testit(int n0, int n1, int n2, int n3, int n4, int n5, int n6,
				   int n7, int n8, int n9, int n10)
{
	print_addr(&n0);
	print_addr(&n1);
	print_addr(&n2);
	print_addr(&n3);
	print_addr(&n4);
	print_addr(&n5);
	print_addr(&n6);
	print_addr(&n7);
	print_addr(&n8);
	print_addr(&n9);
	print_addr(&n10);
}

int main(void)
{
	testit(0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55);
	return 0;
}
