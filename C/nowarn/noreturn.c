void __attribute__((noreturn)) exit(int status);

static int bla(void)
{
	exit(1);
	/* there should be no warning here as the panic above won't return
	 * so no problem with missing return value */
}

int main(void)
{
	(void)bla;
	return 0;
}
