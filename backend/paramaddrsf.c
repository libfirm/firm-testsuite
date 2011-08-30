/* We take the address of a parameter.  If a calling convention that passes
 * parameters in registers is used, param has to be written to memory before
 * its address can be taken.  If -msoft-float mode is specified at the same
 * time, the store must not be of a floating point mode but of an integer mode.
 */

float *p;

extern int printf(const char *str, ...);

void __attribute__((noinline)) printit(void)
{
	printf("%f\n", *p);
}

void __attribute__((noinline)) foo(float param)
{
	p = &param;
	printit();
}

int main()
{
	foo(42.5);
	return 0;
}
