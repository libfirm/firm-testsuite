#include <stdarg.h>

va_list a;

void fn1(void);

void fn2(int p1, ...)
{
	va_start(a, p1);
}

void fn1(void)
{
	fn2(0);
}

int main(void)
{
	return 0;
}
