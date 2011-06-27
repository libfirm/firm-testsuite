int main(void)
{
	/* C99 §6.8.4:3 The switch statement is a scope. */
	switch (sizeof(enum { A })) {}
	return A;
}
