_Bool f(int x)
{
	// Complicated way to write return 1;
	x |= 33;
	return x & 32;
}
