int a;

int fn1(unsigned p1, int p2)
{
	return p1 % p2;
}

int main(void)
{
	unsigned b = fn1(a & 1, 3);
	return b == 2;
}
