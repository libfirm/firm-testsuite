unsigned word_swap32(unsigned x)
{
	return x << 16 | x >> 16;
}

unsigned short byte_swap16(unsigned short x)
{
	return x << 8 | x >> 8;
}

unsigned byte_swap32(unsigned x)
{
	return
		(x >> 24               |
		 x >>  8 & 0x0000ff00U |
		 x <<  8 & 0x00ff0000U |
		 x << 24);
}

unsigned long long byte_swap64(unsigned long long x)
{
	return
		(x >> 56                     |
		 x >> 40 & 0x0000000000ff00U |
		 x >> 24 & 0x00000000ff0000U |
		 x >>  8 & 0x000000ff000000U |
		 x <<  8 & 0x0000ff00000000U |
		 x << 24 & 0x00ff0000000000U |
		 x << 40 & 0xff000000000000U |
		 x << 56);
}
