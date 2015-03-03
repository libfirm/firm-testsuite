int a;

int fn1(int p1)
{
	return p1;
}

int main(void)
{
	return 1 ^ a ^ fn1(a && 1) & 1 ^ 1;
}
