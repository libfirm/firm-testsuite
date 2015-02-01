#include <stdio.h>
#include <string.h>

int main(void)
{
	double ld = __builtin_nanf("0xCAFEBABE");
	unsigned char v[sizeof(double)];
	memcpy(v, &ld, sizeof(v));
	for (unsigned i = sizeof(v); i-- != 0;) {
		printf("%02X", v[i]);
	}
	putchar('\n');
	return 0;
}
