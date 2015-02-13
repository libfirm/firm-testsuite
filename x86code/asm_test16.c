int main(void)
{
	int x = 23;
	asm("/* %0 %1 %2 */" :: "i" (42), "m" (x), "r" (19));
	return 0;
}
