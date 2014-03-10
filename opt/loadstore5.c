int a;
int b;

static int fn1(void)
{
	int   c    = 0;
	int  *d    = &c;
	int **e[1];

	b    = 0;
	e[0] = &d;
	*d   = c == 0;

	return c;
}

int main(void)
{
	return fn1() - 1;
}
