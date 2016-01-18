/* The preprocessor does not treat the
 * lonely '#' as a begin of a pp directive. */
#define main()
#define B(b)
#define C(c) main B(c)
#define D()
int C(D)
#
(void)
{
	return 0;
}
