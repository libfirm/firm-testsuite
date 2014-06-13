/** Testcase loosely inspired by code in 176.gcc */

unsigned __attribute__((noinline)) foobar(unsigned x, unsigned y)
{
	if (x == 0x32 || x == 0x30 || x == 0x2f || x == 0x3b || x == 0x3a)
		y += 13;
	if (x == 0x32 || x == 0x30 || x == 0x2f || x == 0x3b || x == 0x3a)
		rand();
	return y;
}

int main(int argc, char **argv)
{
	unsigned max = 1000;
	if (argc > 1)
		max = atoi(argv[1]);
	unsigned i;
	unsigned i2;
	for (i = 0; i < max; ++i) {
		for (i2 = 0; i2 < max; ++i2) {
			foobar(i, i2);
		}
	}
	return 0;
}
