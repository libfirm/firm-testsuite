/* See ISO/IEC 9899:1999 (E) §6.8.6.1:1 */
int f(unsigned length)
{
	if (length > 42)
		goto too_large;

	unsigned flexible[length];

too_large:
	return 0;
}

int main(void)
{
	return 0;
}
