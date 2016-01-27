static int a[1];
int b;

int main(void)
{
	a[0]     = 42;
	*(a - b) = 0;
	return a[0];
}
