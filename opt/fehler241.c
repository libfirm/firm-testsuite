int fn1(int p1)
{
	return 0 / p1;
}

int fn2(void)
{
	return fn1(0);
}

int main(void)
{
	return 0;
}
