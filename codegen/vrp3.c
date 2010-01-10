unsigned f(unsigned x)
{
	return x * 16 & 3;
}

unsigned g(unsigned char x)
{
	return x >> 5 & 0xF0000000;
}

unsigned h(unsigned char x)
{
	return (x >> 5 | 0x0FF0FFFF) & 0xFFFF0FFF ^ 0xF00FFF00;
}
