int main(void)
{
	/* C99 §6.8.5:5 The while statement is a scope. */
	while (sizeof(enum { A })) {}
	return A;
}
