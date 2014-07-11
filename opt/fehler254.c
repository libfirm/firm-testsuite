int a;
int b;

int fn1(void)
{
	return 0;
}

int main(void)
{
	a = 1;
	b = (fn1() && b) > (0 != b) > b >= a;
	return b;
}
