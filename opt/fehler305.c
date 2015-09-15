int a;
int b;

void fn1(int p1)
{
	&p1;
	a ^= 1;
	a ^= 2147483648LL >= p1;
	a |= p1;
}

int main(void)
{
	int g = -1;
	do {
		fn1(g);
		g = 0;
	} while (b);

	return 0;
}
