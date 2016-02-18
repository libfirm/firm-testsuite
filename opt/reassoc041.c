int a;
int b;

int fn1(int p1)
{
	a = p1;
	long long d;
	return (d = b || (b = 0)) == b & (d || -b & (b ^ 1));
}

int main(void)
{
	return 0;
}
