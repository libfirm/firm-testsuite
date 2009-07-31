/* Note: we're quiet sure this test is correct, nonetheless gcc and icc both
   fail it */
#include <stdarg.h>

void f(char* fmt, ...);
void f(fmt) // This is valid, because it is a function definition
	char* fmt;
{
	va_list ap;
	va_start(ap, fmt);
	va_end(ap);
}

int main(void) { return 0; }
