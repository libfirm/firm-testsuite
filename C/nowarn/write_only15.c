extern int printf(const char *str, ...);

int main(void)
{
	int i = 0;
	printf("%d\n", i++);
	printf("%d\n", ++i);
	return 0;
}
