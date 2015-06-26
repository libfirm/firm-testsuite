int a;
int b;

int f(int p)
{
	return 1 > 7 >> p ? 0 : 1 << p;
}

int main(void)
{
	a = f(b && 1);
	b = a << 2;
	return a ^ b ^ 5;
}
