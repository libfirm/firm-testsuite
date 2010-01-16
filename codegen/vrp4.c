unsigned f(unsigned n)
{
	int i = 0;
	while (n-- != 0) i += 2;
	// return 0;
	return i & 1;
}
