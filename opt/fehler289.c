int a = 1;
int b;
int c;
int d = 3;

char fn1(void)
{
	return b ? 0 : a;
}

void fn2(void)
{
	b = 1;
	int g = c = a;
	c = fn1();
	d &= (char)(g | 2);
}

int main(void)
{
	fn2();
	return d - 3;
}
