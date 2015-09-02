int a;
int b;

int fn1(int p1, int p2)
{
	return p2;
}

unsigned char fn2(void)
{
	return b ? a : 0;
}

int main(void)
{
	for (a = 0; a < 1; a++)
		b = 1;

	if (fn1(0, 0)) {
		short c = fn1(b, fn2());
		a = b <= c;
	}

	return 0;
}
