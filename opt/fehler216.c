struct S0
{
	int m;
} s0;

int a;
int d;

int fn1(struct S0 p1, int *p2)
{
	return *p2;
}

struct S0 fn2() {
	int *b;
	int *c[250] = { &b };
	c[0] && a;

	return s0;
}

void fn3(void)
{
	fn1(fn2(), d);
}

int main(void)
{
	return 0;
}
