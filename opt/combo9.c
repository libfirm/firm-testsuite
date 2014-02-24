volatile int a;
int b;
int *c;
int *d;
int **e;

int fn1(int p1, int p2)
{
	return p2 == 0 || p1 / 0;
}

int fn2(int p1, int p2)
{
	return p1 * p2;
}

void fn3(void)
{
	int j = 0;
	int k[2] = {};

	for (int i = 0; i != 1; i--) {
		a--;
		*e = &j;
		b = fn1(j, a);
		int h = fn2(6, 0 == k[1]);
		*d = 0 < h;
		a;
		*c = j;
	}

	a--;
}

int main(void)
{
	return 0;
}
