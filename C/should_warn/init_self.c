int main(void)
{
	/* we used to have an "initialized by itself" warning but it is superseeded
	 * by now by the "is used uninitialized" warning */
	int i = (i + 5) * 2;
	return 0;
}
