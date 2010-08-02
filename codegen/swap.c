unsigned short swap16_8(unsigned short x)
{
	return x << 8 | x >> 8;
}

unsigned swap32_8(unsigned x)
{
	/* UNIX -> XINU */
	return
		x >> 24               |
		x >>  8 & 0x0000FF00U |
		x <<  8 & 0x00FF0000U |
		x << 24;
}

unsigned swap32_8_variant2(unsigned x)
{
	/* slightly fewer operations than variant 1 but less intuitive */
	unsigned y = x << 16 | x >> 16;
	return y << 8 & 0xFF00FF00 | y >> 8 & 0x00FF00FF;
}

unsigned swap32_8_variant3(unsigned x)
{
	/* this one can be achieved with 4 instructions on arm (if you don't have
	 * an arm with a real swap instructions) */
	return ((x ^ (x << 16 | x >> 16)) & 0xFF00FFFF) >> 8 ^ (x << 24 | x >> 8);
}

unsigned swap32_16(unsigned x)
{
	/* UNIX -> IXUN */
	return x << 16 | x >> 16;
}

unsigned swap32_16_8(unsigned x)
{
	/* UNIX -> NUXI */
	return
		x >>  8 & 0x00FF00FF |
		x <<  8 & 0xFF00FF00;
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
