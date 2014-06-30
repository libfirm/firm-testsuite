unsigned a;

int fn1(unsigned p1)
{
	return p1;
}

int main(void)
{
	int b = fn1(!(1 & a));
	return b - 1;
}
