int main (void)
{
	static int test_array [1 - 2 * !(((long) (&((struct { char c; char ty; } *)0)->ty)) >= 0)];
	test_array [0] = 0;
	return 0;
}
