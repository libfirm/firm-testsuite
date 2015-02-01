#include <stdio.h>
#include <string.h>

static void rep(double const v)
{
	unsigned char c[sizeof(v)];
	memcpy(c, &v, sizeof(c));
	for (unsigned i = sizeof(c); i-- != 0;) {
		printf("%02X", c[i]);
	}
	putchar('\n');
}

static void repf(float const v)
{
	unsigned char c[sizeof(v)];
	memcpy(c, &v, sizeof(c));
	for (unsigned i = sizeof(c); i-- != 0;) {
		printf("%02X", c[i]);
	}
	putchar('\n');
}

int main(void)
{
	double d = __builtin_nanf("0xCAFEBABE");
	rep(d);
	rep(-d);

	float f = __builtin_nan("0xCAFEBABE12345678");
	repf(f);
	repf(-f);
	return 0;
}
