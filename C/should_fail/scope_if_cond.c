int main(void)
{
	/* C99 §6.8.4:3 The if statement is a scope. */
	if (sizeof(enum { A })) {}
	return A;
}
