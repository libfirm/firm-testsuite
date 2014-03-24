long long a;
int b;
unsigned c;

void fn1(void)
{
	b = 0;
}

void fn2(void)
{
	for (;;) {
		fn1();
		short d = b;
		c = d == 0 ? 1 : 1 % d;
		if (c)
			b = a <= 0;
	}
}

int main(void)
{
	return 0;
}
