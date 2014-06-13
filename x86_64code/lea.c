/*$ check leaq\s+_?arr.*\+12\(.*,%.*,4\), %rax $*/
static int arr[20];

int *foo(unsigned long x)
{
	return &arr[x+3];
}

int main(void)
{
	(void)foo;
	return 0;
}
