/*$ check[1] set[a-zA-Z]+\s+flag $*/
char flag;

void __attribute__((noinline)) blup(int d)
{
	flag = d != 0;
}

int main(void)
{
	blup(42);
	printf("%d\n", flag);
	blup(0);
	printf("%d\n", flag);
	return 0;
}
