static unsigned a;
int *b;
int c;
int d;

int fn2(int p1)
{
	return a ? 0 : p1;
}

void fn1(void)
{
	*b = a < c * fn2((d |= a = c < 1) % 25440699U);
	c = a;

	for (int i = 3; i; i--) {
	}
}

int main(void)
{
	return 0;
}
