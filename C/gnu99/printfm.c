extern int printf(const char *str, ...);

void f(void)
{ /* %m is a GNU extension... */
	printf("%m");
}

int main(void) { return 0; }
