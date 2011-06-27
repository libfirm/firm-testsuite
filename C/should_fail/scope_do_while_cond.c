int main(void)
{
	/* C99 §6.8.5:5 The do-while statement is a scope. */
	do {} while (sizeof(enum { A }));
	return A;
}
