int a, b;
int fn1(void)
{
	__asm("" : "=a"(b), "=r"(a) : "a"(0));
	fn1();
	return 1;
}

int main(void)
{
	return 0;
}
