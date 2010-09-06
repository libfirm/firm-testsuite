/* variants with same name except the number should result in the same
 * normalized form */
unsigned __attribute__((noinline)) xnor0(unsigned a, unsigned b)
{
	return ~(a^b);
}

unsigned __attribute__((noinline)) xnor1(unsigned a, unsigned b)
{
	return (~a^b);
}

unsigned __attribute__((noinline)) xnor2(unsigned a, unsigned b)
{
	return (a^~b);
}

unsigned __attribute__((noinline)) xnnor0(unsigned a, unsigned b)
{
	return ~a ^ ~b; /* same as a^b */
}

unsigned __attribute__((noinline)) xnnor1(unsigned a, unsigned b)
{
	return ~b ^ ~a; /* same as a^b */
}

unsigned __attribute__((noinline)) xnorC0(unsigned a)
{
	return ~(a^0xabcdU);
}

unsigned __attribute__((noinline)) xnorC1(unsigned a)
{
	return (~a^0xabcdU);
}

unsigned __attribute__((noinline)) xnorC2(unsigned a)
{
	return (a^~0xabcdU);
}
