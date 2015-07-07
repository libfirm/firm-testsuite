short a;
short *b = &a;
int c;

char fn1(p1, p2)
{
	return p1 * p2;
}

void fn2(void)
{
	if (1 - fn1(*b & 1, 255)) {
	} else {
		c = 0;
	}
}

int main(void)
{
	do {
		fn2();
	} while (a);

	return 0;
}
