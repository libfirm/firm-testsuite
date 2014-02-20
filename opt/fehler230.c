int a;
int b;

int fn1(int p1, int p2)
{
	return p1 < 0 || p2 ? p1 : 0;
}

int main(void)
{
	b = fn1(0, a);

	return 0;
}
