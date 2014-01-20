union {
	int f0;
	int f1 : 1;
} a;

int fn1(void)
{
	for (a.f0 = 0; a.f0 <= 0; a.f0++)
		;

	return a.f1;
}

int main(void)
{
	return 0;
}
