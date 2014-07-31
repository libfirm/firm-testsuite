int a;

int fn1(short p1)
{
	return 1 / p1;
}
int fn2(char p1)
{
	return p1 == 0 || 0 % 0;
}

int main(void)
{
	a = fn1(2);
	a = fn2(a);

	return 0;
}
