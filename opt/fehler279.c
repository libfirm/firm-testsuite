int a;

int fn1(int p1)
{
	return a && p1 && a > p1 || 0 < a;
}

void fn2(void)
{
	a = fn1(fn2 == 1);
}

int main(void)
{
	return 0;
}
