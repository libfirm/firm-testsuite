int main(void)
{
	/* C99 §6.8.5:5 The for body is a scope. */
	for (;;) (void)sizeof(enum { A });
	return A;
}
