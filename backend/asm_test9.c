unsigned f(void)
{
	unsigned i;
	asm volatile("xor %0, %0" : "=r" (i));
	return i;
}
