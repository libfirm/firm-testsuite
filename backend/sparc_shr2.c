int a = 1;
short b = -5L;

static short fn1(int p1, int p2)
{
	return p1 * p2;
}

int main(void)
{
	unsigned short c = fn1(0, 0);
	int d = 1 != b >= c;
	int e = fn1(a, d);

	return e - 1;
}
