#include <limits.h>

int __attribute__((noinline)) abs(int a)
{
	return a <= 0 ? -a : a;
}

int __attribute__((noinline)) minus_abs(int a)
{
	return a <= 0 ? a : -a;
}

signed char __attribute__((noinline)) abs_char(signed char a)
{
	return a <= 0 ? -a : a;
}

signed char __attribute__((noinline)) minus_abs_char(signed char a)
{
	return a <= 0 ? a : -a;
}

extern int printf(const char *str, ...);

int main(void)
{
#define TRY(func,v)   printf("%s(%d) = %d\n", #func, v, func(v))
	TRY(abs,  0);
	TRY(abs,  1);
	TRY(abs, -1);
	TRY(abs, -42);
	TRY(abs,  42);
	TRY(abs,  INT_MAX);
	TRY(abs,  INT_MIN);

	TRY(minus_abs,  0);
	TRY(minus_abs,  1);
	TRY(minus_abs, -1);
	TRY(minus_abs, -42);
	TRY(minus_abs,  42);
	TRY(minus_abs,  INT_MAX);
	TRY(minus_abs,  INT_MIN);

	TRY(abs_char,  0);
	TRY(abs_char,  1);
	TRY(abs_char, -1);
	TRY(abs_char, -42);
	TRY(abs_char,  42);
	TRY(abs_char,  SCHAR_MAX);
	TRY(abs_char,  SCHAR_MIN);

	TRY(minus_abs_char,  0);
	TRY(minus_abs_char,  1);
	TRY(minus_abs_char, -1);
	TRY(minus_abs_char, -42);
	TRY(minus_abs_char,  42);
	TRY(minus_abs_char,  SCHAR_MAX);
	TRY(minus_abs_char,  SCHAR_MIN);

	return 0;
}
