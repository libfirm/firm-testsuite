extern int puts(const char *str);

#ifdef __ELF__
int put_string(const char *str) __attribute__((alias("puts")));

int PutString(const char *str);
#else
#define put_string puts
#define PutString puts
#endif

int main(void)
{
	put_string("Hello World!");
	PutString("Hello again!");
	return 0;
}

#ifdef __ELF__
int __attribute__((alias("puts"))) PutString(const char *);
#endif
