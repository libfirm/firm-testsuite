static int a[1][2];
int b;
int c;

void fn1(void)
{
	a[0][1]     = 42;
	a[b][c + 1] = 0;
}

void fn2(void)
{
	fn1();
}

int main(void)
{
	fn2();
	return a[0][1];
}
