void exit(int x);

int zero = 0;
int foo;

int main(void)
{
	int lzero = zero;
	exit(0);
	/* originally cparser did not put the Div into the memory chain but just
	 * behind a Pin(NoMem) node which makes it floating before the call
	 * (and trigger a signal on x86) */
	foo = 5 / lzero;
}
