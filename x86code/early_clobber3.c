int main(void)
{
	int v;
	asm("movl $23, %0" : "=&m" (v));
	return v - 23;
}
