extern int puts(const char *str);
int put_string(const char *str) __attribute__((alias("puts")));

int PutString(const char *str);

int main(void)
{
	put_string("Hello World!");
	PutString("Hello again!");
	return 0;
}

int __attribute__((alias("puts"))) PutString(const char *);
