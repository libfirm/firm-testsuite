int a;

void f(void)
{
	int       *b = 1;
	long long  c = 0;
	if (a)
		c = -21;
	for (; c != -8; c = (unsigned)c + 1)
		*b = 0;
}

int main(void)
{
	return 0;
}
