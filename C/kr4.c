/* This is correct, see ISO/IEC 9899:1999 (E) §6.7.5.3:15 */
void f(int);
void f(c) char c; {}

int main(void)
{
	return 0;
}
