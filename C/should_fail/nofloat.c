int main(void)
{
	/* this is not a valid floatingpoint constant according to C99
	 * (gcc 4.4.1-4ubuntu9 incorrectly parses it) */
	return 0x.p5;
}
