// The Computer Language Shootout
// http://shootout.alioth.debian.org/
// Precedent C entry modified by bearophile for speed and size, 31 Jan 2006
// Compile with:  -O3 -s -std=c99 -fomit-frame-pointer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char boolean;

static void nsieve(unsigned m)
{
    unsigned int count = 0, i, j;
    unsigned char *flags = malloc(m * sizeof(flags[0]));
    for (i = 0; i < m; ++i)
		flags[i] = 1;

    for (i = 2; i < m; ++i)
        if (flags[i]) {
            ++count;
            for (j = i << 1; j < m; j += i)
                if (flags[j]) flags[j] = 0;
    }

    free(flags);
    printf("Primes up to %8u %8u\n", m, count);
}

int main(int argc, char * argv[])
{
	int i;
    unsigned m = 8;

	if(argc > 1)
		m = atoi(argv[1]);

    for (i = 0; i < 3; i++)
        nsieve(10000 << (m-i));
    return 0;
}
