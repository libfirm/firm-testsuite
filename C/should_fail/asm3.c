int main(void)
{
	/* should fail on noexistant clobber */
	__asm__("" : : : "BAD");
	return 0;
}
