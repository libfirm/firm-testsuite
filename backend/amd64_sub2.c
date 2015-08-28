int a = 1;
int b;
int c[2];

void fn1(void)
{
	b = &a != &b;
}

int main(void)
{
	a -= &a != &b;
	c[1] = a;
	fn1();
	return b ^ 1;
}
