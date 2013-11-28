int a, b, c, d, e, g, h, i, j, k, l, m, n;
volatile unsigned short f;

int main(void)
{
	for (a = 0; b; a++) {
		for (c = 6; c; --c) {
			for (; d; d++)
				e = 9;
			f--;
			g = 0;
			h = 0;
			i = 0;
			j = 1;
			k = 2;
			l = 3;
			m = 4;
			n = 5;
		}
		long long o = g;
		e = a > -o ? 0 : 1;
	}

	return 0;
}
