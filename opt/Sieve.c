/*
 * Project:     GCC-firm
 * File name:   test/Sieve.c
 * Purpose:     Eratosthenes Sieve prime number benchmark in Java
 * Author:      Boris Boesler
 * Modified by: Michael Beck (for GCC-firm)
 * Created:     XX.08.2001
 * CVS-ID:      $Id$
 * Copyright:   (c) 2001 Universitaet Karlsruhe
 * Licence:
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char boolean;

#define true	1
#define false	0

static int SIZE = 500; //8190;
/* Gl: 8190 takes too long for continuous testing. */

static void mark_count(int c) {
	printf("number of primes in [2..%d) : %d (correct: 2..500: 95)\n", SIZE, c);
}

static void runSieve(void) {
	int ITERATIONS = 100000;
	boolean *flags;
	int i, prime, k;
	int iterations = 0;
	int count;
	int s = SIZE;

	flags = (void *)malloc(sizeof(*flags) * s);

	// loop around for measurements
	while(ITERATIONS > iterations) {
#if 0
		for(i = 0; i < SIZE; i++)
			flags[i] = true;
#endif
		memset(flags, 0x01010101, s);
		for(i = 2; i < s; i++) {
			if(flags[i]) {
				prime = i;
				for(k = i + prime; k < s; k += prime)
					flags[k] = false;
			}
		}
		iterations++;
	}
	// test correctness
	count = 0;
	for(i = 2; i < s; i++) {
		if(true == flags[i]) {
			count++;
		}
	}
	mark_count(count);
}

int main(int argc, char *argv[]) {
	printf("Sieve.c\n");

	if (argc <= 1) {
		printf("\nUsage: Sieve n\n");
		printf("Continuing with default input.\n");
	} else {
		SIZE = atoi(argv[1]);
	}

	runSieve();

	return 0;
}
