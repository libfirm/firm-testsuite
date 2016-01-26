int a;

void fn1(unsigned long long p1, int p2)
{
	p1 -= p2;
	a = (p1 ? p1 : p2) <= 0;
}

int main(void)
{
	unsigned char d = a;
	fn1(a && d, d);
}
