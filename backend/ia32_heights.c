int a;
volatile int b;

int fn1(int p1, int p2)
{
	(void)p1;

	return p2 ? 0 : 0 / 0;
}

void fn2(void)
{
	int c = 1;

	for (;;) {
		if (fn1((4 ^ (b &= 1)) > 0, c) || c)
			a--;
		c = 0;
	}
}

int main(void)
{
	return 0;
}
