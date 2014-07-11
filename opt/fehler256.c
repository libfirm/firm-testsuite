int a;

int fn1(void)
{
	return 1;
}

int main(void)
{
	int b = -422553432;
	int c = fn1();
	int d = b / c;
	int e = d > (a < 0);

	return e;
}
