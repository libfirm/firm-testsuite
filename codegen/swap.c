unsigned short swap16_8(unsigned short x)
{
	return x << 8 | x >> 8;
}

unsigned swap32_8(unsigned x)
{
	return
		(x >> 24               |
		 x >>  8 & 0x0000FF00U |
		 x <<  8 & 0x00FF0000U |
		 x << 24);
}

unsigned swap32_16(unsigned x)
{
	return x << 16 | x >> 16;
}

unsigned long long swap64_8(unsigned long long x)
{
	return
		(x >> 56                     |
		 x >> 40 & 0x0000000000FF00U |
		 x >> 24 & 0x00000000FF0000U |
		 x >>  8 & 0x000000FF000000U |
		 x <<  8 & 0x0000FF00000000U |
		 x << 24 & 0x00FF0000000000U |
		 x << 40 & 0xFF000000000000U |
		 x << 56);
}

unsigned long long swap64_16(unsigned long long x)
{
	return
		x >> 48                       |
		x >> 16 & 0x00000000FFFF0000U |
		x << 16 & 0x0000FFFF00000000U |
		x << 48;
}

unsigned long long swap64_32(unsigned long long x)
{
	return x << 32 | x >> 32;
}
