int main(void)
{
	/* C99 §6.8.5:5 The for statement is a scope. */
	for (;sizeof(enum { A });) {}
	return A;
}
