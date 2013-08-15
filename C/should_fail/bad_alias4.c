void foo(void) { }
/* clang+gcc accept this and simply ignore the alias?!? (icc rejects it
 * and cparser should too) */
void __attribute__((alias("foo"))) blup(void) {}

int main(void)
{
	return 0;
}
