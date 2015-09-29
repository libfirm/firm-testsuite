int a;
volatile unsigned b;

int main(void)
{
	for (a = 0; a < 1; a++) {
		for (int c = 2; c >= 0; c--) {
			b = c && -(long)b <= 0;
		}
	}

	return b;
}
