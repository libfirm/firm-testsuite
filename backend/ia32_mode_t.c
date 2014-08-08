int a;
volatile int b;

void fn1(void)
{
	++b;
}

void fn2(void)
{
	fn1();
	printf(a);
}

int main(void)
{
	return 0;
}
