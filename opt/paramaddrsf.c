/* We take the address of a parameter.  If a calling convention that passes
 * parameters in registers is used, param has to be written to memory before
 * its address can be taken.  If -msoft-float mode is specified at the same
 * time, the store must not be of a floating point mode but of an integer mode.
 */

void bar(float *p)
{
}

void foo(float param)
{
	bar(&param);
}

int main()
{
	return 0;
}
