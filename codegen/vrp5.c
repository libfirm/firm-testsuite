unsigned f(unsigned short x)
{
	// return x >> 11;
	return x >> 11 & 0x1F;
}

unsigned g(unsigned a, unsigned b)
{
	// return (a & 0x1F | 0x20) & b;
	return (a & 0x1F | 0x20) & b & 0x3F;
}
