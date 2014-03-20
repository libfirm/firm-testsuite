extern int __attribute__((format(printf,1,2))) printf(const char *str, ...);

int main(void)
{
	unsigned long ul = 42;
	printf("%u", ul);
}
