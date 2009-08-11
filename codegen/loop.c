/* use div in an obscure manner to make register constraints interfere with
 * Phis (produces interestingly bad results with most x86 compiler I tried ;-)
 */
volatile int l;

void f(int x)
{
	int i;
	for(i = 0; i < x; i = 100 / i) {
		l = i;
	}
}
