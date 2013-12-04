int a;
int b;
int c;
int d;
int e;
int f;

static int fn1(int p1)
{
	return 0;
}

static int fn2(int p1, unsigned p2)
{
	return p2 == 0 ? 0 : p1 % p2;
}

static void fn3(void)
{
	for (int i = 0; i < 10; i++)
		;
}

void fn4(void)
{
	for (;;) {
restart:
		for (b = 0;; b++) {
			int bla = fn1(1 && b);
			int g = fn2(e, 2);
			c =  bla > b;
			d |= g != 2;
			fn3();
			if (d)
				break;
		}
	}
	goto restart;
}

int main(void)
{
	return 0;
}
