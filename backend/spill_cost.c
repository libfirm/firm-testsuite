int b;

static void fn1(void)
{
}

static void fn2(void)
{
	for (; b; b++){
	}
}

void fn3()
{
	int i = 0;

	for (; i < 1; i++) {
	}

	for (;;) {
		for (; fn1;) {
			int a[45] = { };

			fn2();

			for (; i; i++) {
			}
		}
	}
}

int main()
{
	return 0;
}
