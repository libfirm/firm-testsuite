#include <stdio.h>
#include <stdarg.h>

void __attribute__((noinline)) g(va_list ap)
{
	int arg = va_arg(ap, int);
	printf("%d\n", arg);
	va_end(ap);
}

void __attribute__((noinline)) f(char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);

	for(char *c = fmt; *c != '\0'; c++) {
		switch(*c) {
		case '1': {
			va_list new_ap;
			va_copy(new_ap, ap);
			g(new_ap);

			int dump1 = va_arg(ap, int);
			break;
		}
		case '2': {
			double arg = va_arg(ap, double);
			printf("%f\n", arg);
			break;
		}
		case '3': {
			long double arg = va_arg(ap, long double);
			printf("%LF\n", arg);
			break;
		}
		default:
			printf("Unknown conversion %c\n", *c);
			break;
		}
	}

	va_end(ap);
}

int main(void)
{
	f("123123123123123123123123123123",
	  0, 0.000000, 0.000000L,
	  1, 1.000000, 1.000000L,
	  2, 2.000000, 2.000000L,
	  3, 3.000000, 3.000000L,
	  4, 4.000000, 4.000000L,
	  5, 5.000000, 5.000000L,
	  6, 6.000000, 6.000000L,
	  7, 7.000000, 7.000000L,
	  8, 8.000000, 8.000000L,
	  9, 9.000000, 9.000000L);
	return 0;
}
