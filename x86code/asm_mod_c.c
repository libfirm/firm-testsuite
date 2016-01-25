int main(void)
{
	int res = -42;
	asm("leal %c1(%0), %0" : "+r" (res) : "i" (42));
	return res;
}
