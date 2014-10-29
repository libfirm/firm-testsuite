int a;

void fn1(void)
{
	int b;
	int *c = &b;
	if (a) {
lbl_162:
		for (; a;)
			;
	}
	*c = 1;
	if (b)
		goto lbl_162;
}

void fn2(void)
{
	fn1();
}

int main(void)
{
	return 0;
}
