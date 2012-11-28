typedef struct str {
	char *s;
	unsigned long l;
} str;

str *s = &(str) { "foo", sizeof("foo")-1 };

extern int puts(const char *str);

int main(void)
{
	puts(s->s);
	return 0;
}
