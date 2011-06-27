int main(void)
{
	if (1)
		/* C99 §6.8.4:3 The then part is a scope. */
		(void)sizeof(enum { A });
	else
		return A;
	return A;
}
