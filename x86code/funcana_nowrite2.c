extern int printf(const char *str, ...);

int g = 5;

static int __attribute__((noinline)) doeswrite(int x)
{
	if (x == 0)
		return 0;
	g = 13;
	doeswrite(0);
	return 0;
}

/* the t2-t should be optimized away because load-after-load should merge them */
int main(void)
{
	printf("result: ");
	int t = g;
	int res = doeswrite(4);
	int t2 = g;
	int main_res = t2 - t;
	printf("%d %d\n", res, main_res);
	return main_res - 8;
}
