int a = 42;

void fn1(int *p1)
{
	*p1 = 0;
	*p1 = a;
}

int main(void)
{
	fn1(&a);

	return a;
}
