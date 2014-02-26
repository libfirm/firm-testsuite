unsigned doz0(unsigned a, unsigned b)
{
	return a < b ? b-a : 0;
}

unsigned doz1(unsigned a, unsigned b)
{
	return b < a ? b-a : 0;
}

unsigned doz2(unsigned a, unsigned b)
{
	return a <= b ? 0 : b+a;
}

unsigned doz3(unsigned a, unsigned b)
{
	return a <= b ? 0 :  b<<a;
}

unsigned doz4(unsigned a, unsigned b)
{
	return a >= b ? b>>a : 0;
}

unsigned no_sparc_doz(unsigned a, unsigned b)
{
	return a < b ? 0 : b-a;
}

unsigned bla(unsigned a, unsigned b, unsigned c)
{
	return a == b ? 0 : c;
}
