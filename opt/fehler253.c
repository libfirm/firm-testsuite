int a;

int fn1(int p1)
{
	return p1;
}

int main(void)
{
	int b = -1L;
	int c = !fn1(a > b);
	return c;
}
