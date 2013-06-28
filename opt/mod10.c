/* During optimization, we replace the mod operation by cheaper operations.
 * However, the backend must be careful not to generate an unsigned op if
 * the signed version is needed (or vice versa). */
long __attribute__((noinline)) mod10(long a)
{
	return a % 10;
}

int main()
{
	return mod10(-1) != -1;
}
