#include <stdio.h>
#include <complex.h>

static void print_complex(complex double c)
{
	printf("%f %f\n", creal(c), cimag(c));
}

int main(void)
{
	complex double c1 = -20. + 5. * I;
	complex double c2 = 5 + -7.25 * I;
	complex double plu = +c1;
	complex double min = -c1;
	complex double add = c1 + c2;
	complex double sub = c1 - c2;
	complex double mul = c1 * c2;
	complex double div = c1 / c2;
	print_complex(c1);
	print_complex(c2);
	print_complex(plu);
	print_complex(min);
	print_complex(add);
	print_complex(sub);
	print_complex(mul);
	print_complex(div);
}
