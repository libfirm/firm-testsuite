int a;
int b;
int c;
int d;

int fn1(int p1, int p2)
{
	return p2 == 0 ? 0 : p1 / p2;
}

int fn2(int p1)
{
	return p1 << a;
}

int main(void)
{
	b = fn2(0);
	do {
		c = b ? d : 0;
		d = 0;
	} while (fn1(c, a));
}
