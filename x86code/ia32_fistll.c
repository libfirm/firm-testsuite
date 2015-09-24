/*$ -march=i686 $*/
volatile long double o;
volatile long long g;

long double __attribute__((noinline)) blup(void) {
	/* bring register pressure up to 8 */
	long double v0 = o;
	long double v1 = o;
	long double v2 = o;
	long double v3 = o;
	long double v4 = o;
	long double v5 = o;
	long double v6 = o;
	long double v7 = o;

	/* convert long double value to 64bit int which also lives through here */
	long double value = v7;
	g = value;

	o = v0;
	o = v1;
	o = v2;
	o = v3;
	o = v4;
	o = v5;
	o = v6;
	o = v7;
	return value;
}

extern int printf(const char *str, ...);

int main(void)
{
	o = 1.0f;
	printf("%Lf\n", blup());
	printf("%lld\n", g);
	return 0;
}
