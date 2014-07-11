int a;
int b;
int *c = &a;

int fn1(void)
{
	return 0;
}

int main(void)
{
	b = 1;
	*c = (fn1() && a) > &a > a < b;
	return a - 1;
}
