int printf(const char *format, ...);

int p, q, r;

void bla(int *x) {
	*x = 0;
}

static int test(int a, int b, int c) __attribute__((noinline));

static int test(int a, int b, int c)
{
	int res;

	if (a < b)
		res = 1;
	else
		res = 2;
	if (b < c)
		res += 1;

	bla(&c);
	return res;
}

int main() {
	int t = test(1, 2, 3) - 2;
	printf("%d\n", t);
	return t;
}
