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

int g = 13;

/* the t2-t should be optimized away because load-after-load should merge them */
/*$ !check sub $*/
int main(void)
{
	printf("result: ");
	int t = g;
	int res = nowrite(5, 42);
	int t2 = g;
	int main_res = t2 - t;
	printf("%d\n", res);
	return main_res;
}
