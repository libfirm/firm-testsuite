long long x;

/* Prevent inlining. */
long long foo() __attribute__((noinline))
{
	return x;
}

int main()
{
	/* Result is unused but the double word lowerer still has to modify
	 * the result types of the call, even if it never encounters a Proj. */
	foo();
	return 0;
}
