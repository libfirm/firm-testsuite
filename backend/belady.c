int a;
long long b;

int fn1(int p1)
{
	return p1 ? 0 : 0 % 0;
}

int main(void)
{
	a = fn1(--b);
	return 0;
}
