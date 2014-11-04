int a;
volatile int b;

int fn1(int p1)
{
	return p1 && a || a;
}

void fn2(void)
{
	int d = 1;
	for (;;) {
		fn1(d);
		b;
		d = 0;
	}
}

int main(void)
{
	return 0;
}
