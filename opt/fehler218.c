int a;

static int fn1(int p1)
{
	return 0;
}

void fn2(void)
{
	int c = 0;
	for (;;) {
		c || a, fn1(1 && c) && a;
		for (;!c; c++)
			;
	}
}

int main(void)
{
	return 0;
}
