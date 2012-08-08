#include "rand.h"
#include <stdio.h>
#include <stdlib.h>

unsigned char first_ones[65536];

void init(void)
{
	first_ones[0] = 16;
	unsigned s;
	for (s = 1; s < 65536; ++s) {
		unsigned maskl = 32768;
		unsigned j;
		for (j = 0; j < 16; ++j) {
			if (s & maskl) {
				first_ones[s] = j;
				break;
			}
			maskl >>= 1;
		}
	}
}

/* returns the first set bit in a unsigned long long value */
int __attribute__((noinline)) FirstOne(unsigned long long arg1)
{
	union doub {
		unsigned short i[4];
		unsigned long long d;
	};
	union doub x;
	x.d=arg1;

	if (x.i[3])
		return (first_ones[x.i[3]]);
	if (x.i[2])
		return (first_ones[x.i[2]]+16);
	if (x.i[1])
		return (first_ones[x.i[1]]+32);
	if (x.i[0])
		return (first_ones[x.i[0]]+48);

	return(64);
}

unsigned long long data[32];

int main(int argc, char **argv)
{
	my_srand(12345);
	unsigned iterations = 5000000;
	if (argc > 1)
		iterations = atoi(argv[1]);

	printf("Initialize...\n");
	init();
	size_t d;
	for (d = 0; d < sizeof(data)/sizeof(data[0]); ++d) {
		unsigned long long datum = 0;
		switch (my_rand() % 4) {
		case 3:  datum |= ((unsigned long long)my_rand() & 0xff) << 24;
		case 2:  datum |= ((unsigned long long)my_rand() & 0xff) << 16;
		case 1:  datum |= ((unsigned long long)my_rand() & 0xff) << 8;
		default: datum |= ((unsigned long long)my_rand() & 0xff);
		}
		data[d] = datum;
	}
	printf("ok, runing %u iterations\n", iterations);
	unsigned final_checksum = 0;
	unsigned i;
	for (i = 0; i < iterations; ++i) {
		unsigned checksum = 0;
		for (d = 0; d < sizeof(data)/sizeof(data[0]); ++d) {
			checksum += FirstOne(data[d]);
		}
		final_checksum = checksum;
	}
	printf("checksum %u\n", final_checksum);
	return 0;
}
