int a;

static int fn1(void)
{
	return 0;
}

void fn2(void)
{
	int c = 0;
	for (;;) {
		fn1() && a;
		for (;!c; c++)
			;
	}
}

int main(void)
{
	return 0;
}
