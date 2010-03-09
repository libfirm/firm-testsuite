extern int __attribute__((format(printf,1,2))) printf(const char *str, ...);

int main(void)
{
	printf("%*d\n", 5, 5);
	return 0;
}
