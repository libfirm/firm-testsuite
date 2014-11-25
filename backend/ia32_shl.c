int a;
int b;
int c;

int fn1(void)
{
	return 1;
}

int main(void)
{
	int d = 5242;
	b = 1;
	for (;;) {
		c = a << d;
		d = 0;
		if (fn1()) {
			if (b)
				break;
		} else {
			b = 0;
		}
	}

	return 0;
}
