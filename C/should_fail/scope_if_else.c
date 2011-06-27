int main(void)
{
	if (1) {
	} else
		/* C99 §6.8.4:3 The else part is a scope. */
		(void)sizeof(enum { A });
	return A;
}
