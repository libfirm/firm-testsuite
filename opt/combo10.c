int a = 1;

struct s0 {
	int f0[1][1];
	int f1;
} b;

void fn1(void)
{
	int *c;
	int *d;
	int *e = b.f0[b.f1];

	while (a == 0) {
		*c++ = *d++ + e++ > (int *)0;
	}
}

int main(void)
{
	fn1();

	return 0;
}
