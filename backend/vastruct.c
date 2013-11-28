/* Test variadic arguments and struct return+parameter in the same function */
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>

typedef struct {
	int a, b, c;
} foo;

foo __attribute__((noinline)) f(foo f, ...)
{
	va_list ap;
	va_start(ap, f);

	int res = 0;
	for (int i = 0; i < f.a; ++i) {
		int val = va_arg(ap, int);
		if (val > 0)
			res += f.b;
		else
			res += f.c;
	}
	va_end(ap);

	f.a = res;
	return f;
}

int main(void)
{
	foo arg = { 5, 13, -5 };
	foo res = f(arg, 1, 0, 1, 1, 0);
	printf("Res: %d\n", res.a);
	assert(res.a == 29);
	return 0;
}
