int a;

void fn2(void)
{
	int c = 0;
	for (;;) {
		c || a, c && a;
		for (;!c; c++)
			;
	}
}

int main(void)
{
	return 0;
}
