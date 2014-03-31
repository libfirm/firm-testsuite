/*$ check leal\s+_?arr.*\+12\(.*,%.*,4\), %eax $*/
static int arr[20];

int *foo(unsigned x)
{
	return &arr[x+3];
}

int main(void)
{
	(void)foo;
	return 0;
}
