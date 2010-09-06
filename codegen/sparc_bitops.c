unsigned xnor(unsigned x, unsigned y)
{
	return ~(x ^ y);
}

unsigned xnor2(unsigned x, unsigned y)
{
	return ~x ^ y;
}

unsigned xnor3(unsigned x, unsigned y)
{
	return x ^ ~y;
}

unsigned xor(unsigned x, unsigned y)
{
	return x ^ y;
}

unsigned xor2(unsigned x, unsigned y)
{
	return ~x ^ ~y;
}

unsigned and(unsigned x, unsigned y)
{
	return x & y;
}

unsigned andnot(unsigned x, unsigned y)
{
	return x & ~y;
}

unsigned andnot2(unsigned x, unsigned y)
{
	return ~x & y;
}

unsigned notor(unsigned x, unsigned y)
{
	return ~x & ~y;
}

unsigned or(unsigned x, unsigned y)
{
	return x | y;
}

unsigned ornot(unsigned x, unsigned y)
{
	return ~x | y;
}

unsigned ornot2(unsigned x, unsigned y)
{
	return x | ~y;
}

unsigned notand(unsigned x, unsigned y)
{
	return ~x | ~y;
}
