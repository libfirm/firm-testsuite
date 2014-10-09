int a;

int fn1(int p1, int p2)
{
	return p2 && p1;
}

int fn2(int p1)
{
	return p1 & fn1(a, &a);
}

int main(void)
{
	return 0;
}
