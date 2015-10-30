union {
	unsigned u;
	int i;
	float f;
} a, b;

int conv(unsigned p)
{
	a.u = p;
	float t = a.f;

	b.f = t;
	return b.i;
}

int main(void)
{
	return 0;
}
