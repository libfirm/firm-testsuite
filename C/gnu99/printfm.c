extern int printf(const char *str, ...);

int main(void) {
	/* %m is a GNU extension... */
	printf("%m");
	return 0;
}
