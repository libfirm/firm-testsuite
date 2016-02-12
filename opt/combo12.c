short a;

int fn1(void)
{
}

int fn2(void)
{
	(fn1() || (a = 0)) | (a %= 0) ? a *= a : (a *= (char)a);
}

int main(void)
{
	return 0;
}
