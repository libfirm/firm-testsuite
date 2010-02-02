extern int printf(const char *str, ...);

static void __attribute__((used)) printadd(int x, int y)
{
	printf("%d\n", x + y);
}

int main(void)
{
	int n1 = 42;
	int n2 = 13;

	__asm__(
			"pushl %0\n"
			"pushl %1\n"
			"call printadd\n"
			"addl $8, %%esp"
		:  /* no outputs */
		: "rmi"(n1), "rmi"(n2)
		: "cc", "edx", "ecx", "eax", "memory" );

	return 0;
}
