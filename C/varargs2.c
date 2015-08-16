#include <stdarg.h>

va_list *ap;

void f(char const* fmt, ...)
{
	va_start(*ap, fmt);
	va_arg(*ap, int);
	va_end(*ap);
}

int main(void)
{
	return 0;
}
