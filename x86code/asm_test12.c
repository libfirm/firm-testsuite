int main(void)
{
	int a = 42;
	int b;
	asm ("" : "=r" (b) : "m" (a));
	return 0;
}
