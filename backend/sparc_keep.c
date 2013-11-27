volatile int a;
int b;
int c;
int d;

static void fn1(int p1)
{
	long l = (0 > b) >> ((c = d == 0) <= p1);
	a = l - 2147483648L < 0 ? 0 : 42;
}

int main(void)
{
	for (int i = 0; i < 42; i++)
		fn1(1);

	return 0;
}
