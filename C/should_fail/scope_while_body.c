int main(void)
{
	/* C99 §6.8.5:5 The while body is a scope. */
	while (0) (void)sizeof(enum { A });
	return A;
}
