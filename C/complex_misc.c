#include <complex.h>
#include <stdio.h>

complex double c0 = 4 - 7*I;
complex double c1 = -4.3 + 84.1*I;
complex double cnull = 0;
complex double cone = 1.;

static void print_complex(complex double c)
{
	printf("%f %f\n", creal(c), cimag(c));
}

typedef struct foo {
	complex double c0;
	complex double c1;
} foo;
foo F = { -3.1 - 4.3*I, 9-2.5*I };

complex double numbers[4] = { 0., 1.1+1.1*I, 2.2+2.2*I, 3.3+3.3*I };

int main(void)
{
	/* assign binops */
	c0 += 2;
	print_complex(c0);
	c0 += c1;
	print_complex(c0);
	c0 -= 2;
	print_complex(c0);
	c0 -= c1;
	print_complex(c0);
	c0 *= c1;
	print_complex(c0);
	c0 /= c1;
	print_complex(c0);
	/* comparisons */
	printf("%d %d %d %d %d\n", !cone, !cnull, !c0, !I, !(complex double)0);
	printf("%d %d %d %d %d %d\n", cone && cnull, cone && cone,
	       cone || cnull, cnull || cnull, I && I, I || cnull);
	printf("%d %d %d %d\n", c0 == c1, c0 != c1, c0 == c0, c0 != c0);
	print_complex(1 ? c1 : c0);
	print_complex(0 ? c1 : c0);
	printf("%d\n", ((complex double)5, 0));
	print_complex( (printf("a number: "), c1) );

	print_complex(F.c0);
	complex double l = F.c1;
	print_complex(l);
	F.c1 *= 2;
	print_complex(F.c1);
	for (size_t i = 0; i < sizeof(numbers)/sizeof(numbers[0]); ++i) {
		print_complex(numbers[i]);
	}

	return 0;
}
