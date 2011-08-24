#include <stdio.h>

#if defined(__FIRM_MAJOR__) && defined(__GNUC__)
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v)     __builtin_va_end(v)
#define va_arg(v,l)   __builtin_va_arg(v,l)
#define va_copy(d,s)  __builtin_va_copy(d,s)

typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;

#else
#include <stdarg.h>
#endif

void printints(int len, ...)
{
	va_list ap;
	va_start(ap, len);
	for (int i = 0; i < len; ++i) {
		unsigned long long v = va_arg(ap, unsigned long long);
		printf("%llX\n", v);
	}
}

int main(void)
{
	printints(6,
			  1ull,
			  42ull,
			  0xCAFEull,
			  0xBABEull,
			  0xBADF00Dull,
			  0x12345678CAFEBABEull,
			  0xEBABEFAC87654321ull);
	return 0;
}
