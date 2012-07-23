extern int printf(const char *str, ...);

int __attribute__((noinline)) sum(int k)
{
	/* firm incorrectly marked sum as a pure function and then
	 * if-converted this leading to an endless recursion */
	if (k<=0)
		return 0;
	return k+sum(k-1);
}

int main(void)
{
	printf("%d %d\n", sum(-1), sum(10));
	return 0;
}
