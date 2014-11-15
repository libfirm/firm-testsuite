int main(void)
{
	/* C99 §6.7.8p5 declaration of identifier with block scope and
	 * internal/external linkage must not have initializer. */
	extern int i = 23;
	return i;
}
