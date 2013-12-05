int a;

static int fn1(void)
{
	return 1;
}

void fn2(void)
{
	a = 0;
	for (;fn1();) {
	}
}

int main(void)
{
	return 0;
}
