unsigned foo(void)
{
	int x = 1;
	int z = rand();
	int y = z;
	for (int i = 0; i < 1000; ++i) {
		if (y != z)
			x = 2;
		x = 2 - x;
		if (x != 1)
			y = 2;
	}
	return x;
}
