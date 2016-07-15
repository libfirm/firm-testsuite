/*$ !check initializer $*/

int f(void)
{
	int a[] = {};
	return a[0];
}

int main(void)
{
	return 0;
}
