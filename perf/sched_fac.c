unsigned fac(unsigned n)
{
	unsigned v = 1;
	while (n != 0) {
		v *= n--;
	}
	return v;
}
