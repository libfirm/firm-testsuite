extern int printf(const char *str, ...);

void __attribute__((noinline)) swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

int main(void)
{
	int x = 23;
	int longarray[10000];
	int y = 42;
	int i;

	swap(&x, &y);
	for (i = 0; i < sizeof(longarray)/sizeof(int); ++i) {
		longarray[i] = i + 10;
	}

	for (i = 0; i < sizeof(longarray)/sizeof(int); ++i) {
		y += longarray[i];
	}

	printf("Result: %d\n", y);
	return 0;
}
