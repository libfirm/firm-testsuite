long long a;
int b;
int c;
int d;

int fn1(int p1)
{
	return a < 0 ? 0 : a;
}

void fn2(void)
{
	do {
		b = 1;
		fn1(c && b);
		c || b;
		d = c && b;
	} while (b);
}

int main(void)
{
	return 0;
}
