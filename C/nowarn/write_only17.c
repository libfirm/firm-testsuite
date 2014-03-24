#include <stdarg.h>
#include <stdio.h>

static void foo(va_list ap)
{
	va_list ap2;
	va_copy(ap2, ap);
	printf("%d\n", va_arg(ap2, int));
}

static void blup(const char *str, ...)
{
	(void)str;
	va_list ap;
	va_start(ap, str);
	va_end(ap);
}

static void blup2(const char *str, ...)
{
	(void)str;
	va_list ap;
	va_start(ap, str);
	foo(ap);
	va_end(ap);
}

int main(void)
{
	blup("hello", 42);
	blup2("hello", 42);
	return 0;
}
