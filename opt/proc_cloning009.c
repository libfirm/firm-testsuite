/*$ -fopt-proc-clone -fclone-threshold=0 -fno-inline $*/
#include <stdarg.h>

static int __attribute__((noinline)) varfoo(unsigned n, ...)
{
	int res = 0;
	va_list ap;
	va_start(ap, n);
	for (unsigned i = 0; i < n; ++i) {
		res += va_arg(ap, int);
	}
	va_end(ap);
	return res;
}

int main(void)
{
	return varfoo(5, -42, -23, 0, 23, 42);
}
