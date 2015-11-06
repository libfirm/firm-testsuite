int a;
int b;

void fn1(int p1)
{
	int c = 1;
	if (1)
		fn1(a || b);
	else
label:
		c;
	if (c)
		goto label;
	&c;
}

int main(void)
{
	return 0;
}
