unsigned foo(unsigned a)
{
	return (a & (1u << (sizeof(a)*8-1))) != 0;
}

unsigned foo2(unsigned a)
{
	return a >> (sizeof(a)*8 - 1) != 0;
}

int sfoo(int a)
{
	return (a & (1 << (sizeof(a)*8-1))) < 0;
}

int sfoo2(int a)
{
	return (a >> (sizeof(a)*8 - 1)) != 0;
}

int blup(int a)
{
	return (a & (1 << (sizeof(a)*8-1))) >> 31;
}
