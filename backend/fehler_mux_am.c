extern int printf(const char *str, ...);

int a = 42;
int b = 13;

int main(void)
{
	int res = a;
	/* firm inverted the condition code instead of negating it when swapping
	 * the inputs of a cmov (so it could use address mode) */
	if (b != 0)
		res = b;
	printf("%d\n", res);
	return 0;
}
