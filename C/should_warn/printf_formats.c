extern int __attribute__((format(printf,1,2))) printf(const char *str, ...);

int main(void)
{
	int i = 42;
	printf("%x", i);
	return 0;
}
