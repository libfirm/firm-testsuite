#include <stdarg.h>
#include <stdio.h>

static void __attribute__((noinline)) varfoo(long long l, ...)
{
	va_list ap;
	va_start(ap, l);
	for (long long i = 0; i < l; ++i) {
		int val = va_arg(ap, int);
		printf("%d\n", val);
	}
}

int main(void)
{
	varfoo(5, 42, 13, 7, 55, 666);
}
