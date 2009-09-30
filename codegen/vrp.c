unsigned char f(unsigned char s)
{
	// This is just a complicated way to write return s;
	unsigned x = s % 16U + 1;
	unsigned y = s / 16U + 1;
	return (y - 1) * 16U + (x - 1);
}
