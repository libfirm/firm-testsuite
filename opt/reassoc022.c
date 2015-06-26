int a;

int fn1(int p1)
{
	return ((p1 ^ a) & (-a ^ a)) - a;
}

int fn2(void)
{
	a = fn1(1);
}

int main(void)
{
	fn2();
	return 0;
}
