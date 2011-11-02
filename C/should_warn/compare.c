static int integer = 0;
static void *pointer = 0;

int main(void)
{
	/* should produce a comparing integer with pointer warning */
	if (integer < pointer)
		return 42;
	return 0;
}
