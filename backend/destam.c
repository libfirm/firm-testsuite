static int a[2];

int main(void)
{
	int b = a[0];
	a[0] = -a[1];
	a[1] = b;

	return 0;
}
