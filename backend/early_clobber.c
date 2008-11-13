int main(void)
{
	int x = 23;
	asm("xorl %0, %0" : "=&r" (x));
	printf("%d\n", x);
	return x;
}
