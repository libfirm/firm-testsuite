#include <stdlib.h>
#include <stdio.h>

static unsigned int current_random = 0;

#define IA 1103515245u
#define IC 12345u
#define IM 2147483648u

int __attribute__((noinline)) my_irand(int imax)
{
	/* Creates a random integer between 0 and imax, inclusive.  i.e. [0..imax] */
	int ival;

	/* current_random = (current_random * IA + IC) % IM; */
	current_random = current_random * IA + IC;  /* Use overflow to wrap */
	ival = current_random & (IM - 1);  /* Modulus */
	ival = (int) ((float) ival * (float) (imax + 0.999) / (float) IM);

	if ((ival < 0) || (ival > imax)) {
		printf("Bad value in my_irand, imax = %d  ival = %d\n",imax,ival);
		exit(1);
	}

	return ival;
}

int main(int argc, char **argv)
{
	unsigned iterations = 10000;
	if (argc > 1)
		iterations = atoi(argv[1]);
	printf("doing %u iterations...\n", iterations);

	int checksum = 0;
	unsigned i;
	for (i = 0; i < iterations; ++i) {
		int a;
		checksum = 0;
		for (a = 0; a < 1000; ++a) {
			checksum ^= my_irand(1000);
		}
	}
	printf("Checksum: %d\n", checksum);
	return 0;
}
