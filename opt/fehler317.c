int a;
int b;

int fn1(void)
{
	int c;
	if (c) {
		if (a && b) {
			for (a = 1; a; a++) {
				if (b) {
lbl:
					a = 0;
				}
			}
		}
		b = 0;
	}
	if (a) {
		goto lbl;
	}
}

int fn2(int p1)
{
	if (fn1() * p1) {
		a = 0;
	}
	&p1;
	fn2(a);
}

int main(void)
{
	return 0;
}
