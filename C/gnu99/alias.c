int __attribute__((alias("puts"))) put_string(const char *str);
extern int puts(const char *str);
int __attribute__((alias("puts"))) PutString(const char *str);

int var = 42;
extern int __attribute__((alias("var"))) value;

int main(void)
{
	put_string("Hello");
	PutString("World");
	puts("!");
	return value - 42;
}
