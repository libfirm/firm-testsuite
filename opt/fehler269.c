int a;
int b;
int c;
int *d;

char fn1(int p2)
{
	return p2 ? a : 0;
}

void fn2(void)
{
	for (;; a++) {
		b = a < 18446744073709551615UL | 190;
		int h = (char)b;
		a = c ^ h;
		a = c ? 0 : a > 0;
		*d = fn1(c);
	}
}

int main(void)
{
	return 0;
}
