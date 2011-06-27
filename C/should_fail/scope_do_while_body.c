int main(void)
{
	/* C99 §6.8.5:5 The do-while body is a scope. */
	do (void)sizeof(enum { A }); while (0);
	return A;
}
