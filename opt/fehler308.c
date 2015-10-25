int a;
int b;

int fn1(int p1)
{
	return p1 == 0 ? 0 / 0 : 0;
}

int fn2(void)
{
	for (int c = 2; c; --c) {
		fn1(c);
		if (b) {
			return 0;
		}
	}

	return 1;
}

int main(void)
{
	do {
		a = fn2();
	} while (b);

	return 0;
}
