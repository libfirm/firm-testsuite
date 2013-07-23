static char *foo = { "Hello" };
static char *foo2 = (char*) { "World" };

extern int puts(const char *str);

int main(void)
{
	puts(foo);
	puts(foo2);
	return 0;
}
