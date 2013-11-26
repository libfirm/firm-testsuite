int a = 1;
int b;
int c;

void fn1(void)
{
	c = (0 != &b & a) <= 0;
}

int main()
{
	fn1();
	return c;
}
