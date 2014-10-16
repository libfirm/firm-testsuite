extern int printf(const char *str, ...);

int data[100];

static int __attribute__((noinline)) nowrite(int low, int high)
{
	int res = 0;
	for (int i = low; i < high; ++i) {
		/* empty */
		res += data[i];
	}
	return res;
}

static int __attribute__((noinline)) nowrite2(int x)
{
	if (x <= 1)
		return 1;

	return nowrite2(x-1)+nowrite2(x-2);
}

int g = 13;

/* the t2-t should be optimized away because load-after-load should merge them */
/*$ !check BAD $*/
int main(void)
{
	printf("result: ");
	int t = g;
	int res = nowrite(5, 42);
	int res2 = nowrite2(4);
	int t2 = g;
	int main_res = t2 - t;
	if (main_res)
		printf("BAD");
	printf("%d %d\n", res, res2);
	return main_res;
}
