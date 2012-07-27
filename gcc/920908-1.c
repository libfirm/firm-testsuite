#include <stdarg.h>

typedef struct
{
	int A;
} T;

int g = 0;

T f(int x, ...)
{
	va_list ap;
	T X;
	va_start(ap, x);
	X = va_arg(ap, T);
	if (X.A != 10) {
		g = 1;
		return X;
	}
	X = va_arg(ap, T);
	if (X.A != 20) {
		g = 2;
		return X;
	}
	va_end(ap);
	return X;
}

int main()
{
	T X, Y;
	X.A = 10;
	Y.A = 20;
	f(2, X, Y);
	return g;
}
