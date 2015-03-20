int a;
int b;
char c;
char *d = &c;

short fn1(void)
{
	return a >= 0 ? 1 : 1 >> a;
}

int fn2(void)
{
	return 0;
}

int main(void)
{
	a = fn1();
	b = fn2();
	c = a > b;
	return *d ^ 1;
}
