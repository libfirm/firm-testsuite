int main(void)
{
	int res;
	asm("movl %1, %0" : "=r" (res) : "i" (42));
	return res - 42;
}
