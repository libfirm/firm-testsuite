int main(void)
{
	int d = 23;
	int e = 42;
	__asm__("" : "+r" (e) : "r" (d));
	return 0;
}
