/* The parameter is an abstract function declarator.
 * See ISO/IEC 9899:1999 (E) §6.7.6:2 footnote 126 */
void f(void /*p*/());

void f(void p())
{
	(void)p;
}

int main(void)
{
	f(0);
	return 0;
}
