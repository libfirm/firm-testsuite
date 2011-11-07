unsigned solution = 42;

static void swap(unsigned *p)
{
	*p = ((*p >> 16) & 0x0000ffff) | (*p << 16);
}

int main(void)
{
	swap(&solution);
	swap(&solution);

	return 0;
}
