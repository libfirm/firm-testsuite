void __attribute__((noreturn)) panic(const char *msg);

static int bla(void)
{
	panic("joho");
	/* there should be no warning here as the panic above won't return
	 * so no problem with missing return value */
}

int main(void)
{
	(void)bla;
	return 0;
}
