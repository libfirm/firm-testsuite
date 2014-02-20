int a;

int fn1(void)
{
	return 0;
}

int main(void)
{
	int b = 0;
	int c = fn1();
	c && a;
	a = b;
	int *d[] = { &b };

	return 0;
}
