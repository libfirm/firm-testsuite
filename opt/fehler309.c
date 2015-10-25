int a;

int fn1(void)
{
	return 0;
}

int fn2(int p1, int p2)
{
	return p1 * p2;
}

int main(void)
{
	if (fn1()) {
		a = fn2(a, 1);
		a = fn2(a >= 0, 8) && 1;
	}

	return 0;
}
