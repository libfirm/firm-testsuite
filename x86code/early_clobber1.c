int main(void)
{
	int res;
	int v = 23;
	asm("xorl %0, %0" : "=&a" (res) : "r" (v));
	return res;
}
