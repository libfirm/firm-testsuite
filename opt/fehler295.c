int a;
int b;

int fn1(void)
{
	return 1;
}

int main(void)
{
	int f = 10;
	int g = a && b;
	int h = fn1();
	a = (a & 1) != f;
	if (g | h)
		b = &b == &f;
	return a ^ 1;
}
