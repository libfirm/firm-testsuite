#include <stdio.h>
#include <stdarg.h>

void f(char const* fmt, ...)
{
	{
		va_list ap;
		va_start(ap, fmt);
		vprintf(fmt, ap);
		va_end(ap);
	}

	{
		va_list ap;
		va_start(ap, fmt);
		vprintf(fmt, ap);
		va_end(ap);
	}
}

int main(void)
{
	f("Hello, %s!\n", "world");
	return 0;
}
