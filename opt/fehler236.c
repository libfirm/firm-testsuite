int main(void)
{
	int a = 0;
	for (unsigned char b = 6; b != 1; ++b) {
		unsigned c = -b;
		if (c)
			a = a == 0;
	}
	return a;
}
