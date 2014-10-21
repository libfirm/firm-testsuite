int a;
int b;
int c;
int d;

unsigned fn1(unsigned p1)
{
	return p1 == 0 ? 0 : 1 / p1;
}

void fn2(void)
{
	for (;; a--) {
		b = 1;
		for (; b; ++b)
			;
		c = 0;
		for (;; b) {
			int e[1];
			b && e[0] || e[b];
			break;
		}
		d = 0;
		b = fn1(c);
	}
}

int main(void)
{
	return 0;
}
