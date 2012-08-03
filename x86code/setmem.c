/*$ check[1] set[a-zA-Z]+\s+_?flag $*/
extern int printf(const char *str, ...);
static char flag;

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
