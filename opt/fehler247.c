int a;
unsigned char b;
int c;

int fn1(void)
{
	for (a = 0; a >= 0; a--)
		;
	c &= b = a;
	if (a)
		return 0;
	else
		return b;
}

int main(void)
{
	fn1();
	return c;
}
