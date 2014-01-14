int a;

void f(void)
{
	int b = 0;

lbl_23:
	b || a;
	if (b)
		b = 0;
	for (;; b--)
		if (b)
			goto lbl_23;
}

int main(void)
{
	return 0;
}
