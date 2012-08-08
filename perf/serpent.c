#include <stdint.h>
#include <stdio.h>
#include "rand.h"

void SBoxE1(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T3 ^= T0; T4  = T1; T1 &= T3; T4 ^= T2; T1 ^= T0; T0 |= T3; T0 ^= T4;
	T4 ^= T3; T3 ^= T2; T2 |= T1; T2 ^= T4; T4 = ~T4; T4 |= T1; T1 ^= T3;
	T1 ^= T4; T3 |= T0; T1 ^= T3; T4 ^= T3;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxE2(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
    uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
    T0 = ~T0; T2 = ~T2; T4  = T0; T0 &= T1; T2 ^= T0; T0 |= T3; T3 ^= T2;
    T1 ^= T0; T0 ^= T4; T4 |= T1; T1 ^= T3; T2 |= T0; T2 &= T4; T0 ^= T1;
    T1 &= T2; T1 ^= T0; T0 &= T2; T0 ^= T4;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxE3(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T4  = T0; T0 &= T2; T0 ^= T3; T2 ^= T1; T2 ^= T0; T3 |= T4; T3 ^= T1;
	T4 ^= T2; T1  = T3; T3 |= T4; T3 ^= T0; T0 &= T1; T4 ^= T0; T1 ^= T3;
	T1 ^= T4; T4 = ~T4;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxE4(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T4  = T0; T0 |= T3; T3 ^= T1; T1 &= T4; T4 ^= T2; T2 ^= T3; T3 &= T0;
	T4 |= T1; T3 ^= T4; T0 ^= T1; T4 &= T0; T1 ^= T3; T4 ^= T2; T1 |= T0;
	T1 ^= T2; T0 ^= T3; T2  = T1; T1 |= T3; T1 ^= T0;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxE5(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T1 ^= T3; T3 = ~T3; T2 ^= T3; T3 ^= T0; T4  = T1; T1 &= T3; T1 ^= T2;
	T4 ^= T3; T0 ^= T4; T2 &= T4; T2 ^= T0; T0 &= T1; T3 ^= T0; T4 |= T1;
	T4 ^= T0; T0 |= T3; T0 ^= T2; T2 &= T3; T0 = ~T0; T4 ^= T2;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxE6(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T0 ^= T1; T1 ^= T3; T3 = ~T3; T4  = T1; T1 &= T0; T2 ^= T3; T1 ^= T2;
	T2 |= T4; T4 ^= T3; T3 &= T1; T3 ^= T0; T4 ^= T1; T4 ^= T2; T2 ^= T0;
	T0 &= T3; T2 = ~T2; T0 ^= T4; T4 |= T3; T2 ^= T4;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxE7(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T2 = ~T2; T4  = T3; T3 &= T0; T0 ^= T4; T3 ^= T2; T2 |= T4; T1 ^= T3;
	T2 ^= T0; T0 |= T1; T2 ^= T1; T4 ^= T0; T0 |= T3; T0 ^= T2; T4 ^= T3;
	T4 ^= T0; T3 = ~T3; T2 &= T4; T2 ^= T3;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxE8(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T4  = T1; T1 |= T2; T1 ^= T3; T4 ^= T2; T2 ^= T1; T3 |= T4; T3 &= T0;
	T4 ^= T2; T3 ^= T1; T1 |= T4; T1 ^= T0; T0 |= T4; T0 ^= T2; T1 ^= T4;
	T2 ^= T1; T1 &= T0; T1 ^= T4; T2 = ~T2; T2 |= T0; T4 ^= T2;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxD1(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T2 = ~T2; T4  = T1; T1 |= T0; T4 = ~T4; T1 ^= T2; T2 |= T4; T1 ^= T3;
	T0 ^= T4; T2 ^= T0; T0 &= T3; T4 ^= T0; T0 |= T1; T0 ^= T2; T3 ^= T4;
	T2 ^= T1; T3 ^= T0; T3 ^= T1; T2 &= T3; T4 ^= T2;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxD2(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T4  = T1; T1 ^= T3; T3 &= T1; T4 ^= T2; T3 ^= T0; T0 |= T1; T2 ^= T3;
	T0 ^= T4; T0 |= T2; T1 ^= T3; T0 ^= T1; T1 |= T3; T1 ^= T0; T4 = ~T4;
	T4 ^= T1; T1 |= T0; T1 ^= T0; T1 |= T4; T3 ^= T1;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxD3(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T2 ^= T3; T3 ^= T0; T4  = T3; T3 &= T2; T3 ^= T1; T1 |= T2; T1 ^= T4;
	T4 &= T3; T2 ^= T3; T4 &= T0; T4 ^= T2; T2 &= T1; T2 |= T0; T3 = ~T3;
	T2 ^= T3; T0 ^= T3; T0 &= T1; T3 ^= T4; T3 ^= T0;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxD4(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T4  = T2; T2 ^= T1; T0 ^= T2; T4 &= T2; T4 ^= T0; T0 &= T1; T1 ^= T3;
	T3 |= T4; T2 ^= T3; T0 ^= T3; T1 ^= T4; T3 &= T2; T3 ^= T1; T1 ^= T0;
	T1 |= T2; T0 ^= T3; T1 ^= T4; T0 ^= T1;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxD5(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T4  = T2; T2 &= T3; T2 ^= T1; T1 |= T3; T1 &= T0; T4 ^= T2; T4 ^= T1;
	T1 &= T2; T0 = ~T0; T3 ^= T4; T1 ^= T3; T3 &= T0; T3 ^= T2; T0 ^= T1;
	T2 &= T0; T3 ^= T0; T2 ^= T4; T2 |= T3; T3 ^= T0; T2 ^= T1;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxD6(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T1 = ~T1; T4  = T3; T2 ^= T1; T3 |= T0; T3 ^= T2; T2 |= T1; T2 &= T0;
	T4 ^= T3; T2 ^= T4; T4 |= T0; T4 ^= T1; T1 &= T2; T1 ^= T3; T4 ^= T2;
	T3 &= T4; T4 ^= T1; T3 ^= T4; T4 = ~T4; T3 ^= T0;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxD7(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T0 ^= T2; T4  = T2; T2 &= T0; T4 ^= T3; T2 = ~T2; T3 ^= T1; T2 ^= T3;
	T4 |= T0; T0 ^= T2; T3 ^= T4; T4 ^= T1; T1 &= T3; T1 ^= T0; T0 ^= T3;
	T0 |= T2; T3 ^= T1; T4 ^= T0;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

void SBoxD8(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	uint32_t T0 = *B0, T1 = *B1, T2 = *B2, T3 = *B3, T4;
	T4  = T2; T2 ^= T0; T0 &= T3; T4 |= T3; T2 = ~T2; T3 ^= T1; T1 |= T0;
	T0 ^= T2; T2 &= T4; T3 &= T4; T1 ^= T2; T2 ^= T0; T0 |= T2; T4 ^= T1;
	T0 ^= T3; T3 ^= T4; T4 |= T0; T3 ^= T2; T4 ^= T2;
	*B0 = T1; *B1 = T4; *B2 = T2; *B3 = T0;
}

uint32_t rotate_left(uint32_t val, unsigned rot)
{
	return (val << rot) | (val >> (8*sizeof(val)-rot));
}

uint32_t rotate_right(uint32_t val, unsigned rot)
{
	return (val >> rot) | (val << (8*sizeof(val)-rot));
}

void transform(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	*B0  = rotate_left(*B0, 13);   *B2  = rotate_left(*B2, 3);
	*B1 ^= *B0 ^ *B2;              *B3 ^= *B2 ^ (*B0 << 3);
	*B1  = rotate_left(*B1, 1);    *B3  = rotate_left(*B3, 7);
	*B0 ^= *B1 ^ *B3;              *B2 ^= *B3 ^ (*B1 << 7);
	*B0  = rotate_left(*B0, 5);    *B2  = rotate_left(*B2, 22);
}

void i_transform(uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
	*B2  = rotate_right(*B2, 22);  *B0  = rotate_right(*B0, 5);
	*B2 ^= *B3 ^ (*B1 << 7);       *B0 ^= *B1 ^ *B3;
	*B3  = rotate_right(*B3, 7);   *B1  = rotate_right(*B1, 1);
	*B3 ^= *B2 ^ (*B0 << 3);       *B1 ^= *B0 ^ *B2;
	*B2  = rotate_right(*B2, 3);   *B0  = rotate_right(*B0, 13);
}

uint32_t load_le(const char *ptr)
{
	return (uint32_t)ptr[0]
		| (uint32_t)ptr[1] << 8
		| (uint32_t)ptr[2] << 16
		| (uint32_t)ptr[3] << 24;
}

void store_le(char *ptr, uint32_t val)
{
	ptr[0] =  val        & 0xff;
	ptr[1] = (val >>  8) & 0xff;
	ptr[2] = (val >> 16) & 0xff;
	ptr[3] = (val >> 24) & 0xff;
}

uint32_t round_key[32*4];

void key_xor(unsigned round, uint32_t *B0, uint32_t *B1, uint32_t *B2, uint32_t *B3)
{
   *B0 ^= round_key[4*round  ];
   *B1 ^= round_key[4*round+1];
   *B2 ^= round_key[4*round+2];
   *B3 ^= round_key[4*round+3];
}

void encrypt_block(const char src[16], char dst[16])
{
	uint32_t B0 = load_le(src);
	uint32_t B1 = load_le(src+4);
	uint32_t B2 = load_le(src+8);
	uint32_t B3 = load_le(src+12);

    key_xor( 0,&B0,&B1,&B2,&B3); SBoxE1(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 1,&B0,&B1,&B2,&B3); SBoxE2(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 2,&B0,&B1,&B2,&B3); SBoxE3(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 3,&B0,&B1,&B2,&B3); SBoxE4(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 4,&B0,&B1,&B2,&B3); SBoxE5(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 5,&B0,&B1,&B2,&B3); SBoxE6(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 6,&B0,&B1,&B2,&B3); SBoxE7(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 7,&B0,&B1,&B2,&B3); SBoxE8(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 8,&B0,&B1,&B2,&B3); SBoxE1(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor( 9,&B0,&B1,&B2,&B3); SBoxE2(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(10,&B0,&B1,&B2,&B3); SBoxE3(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(11,&B0,&B1,&B2,&B3); SBoxE4(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(12,&B0,&B1,&B2,&B3); SBoxE5(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(13,&B0,&B1,&B2,&B3); SBoxE6(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(14,&B0,&B1,&B2,&B3); SBoxE7(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(15,&B0,&B1,&B2,&B3); SBoxE8(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(16,&B0,&B1,&B2,&B3); SBoxE1(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(17,&B0,&B1,&B2,&B3); SBoxE2(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(18,&B0,&B1,&B2,&B3); SBoxE3(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(19,&B0,&B1,&B2,&B3); SBoxE4(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(20,&B0,&B1,&B2,&B3); SBoxE5(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(21,&B0,&B1,&B2,&B3); SBoxE6(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(22,&B0,&B1,&B2,&B3); SBoxE7(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(23,&B0,&B1,&B2,&B3); SBoxE8(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(24,&B0,&B1,&B2,&B3); SBoxE1(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(25,&B0,&B1,&B2,&B3); SBoxE2(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(26,&B0,&B1,&B2,&B3); SBoxE3(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(27,&B0,&B1,&B2,&B3); SBoxE4(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(28,&B0,&B1,&B2,&B3); SBoxE5(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(29,&B0,&B1,&B2,&B3); SBoxE6(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(30,&B0,&B1,&B2,&B3); SBoxE7(&B0,&B1,&B2,&B3); transform(&B0,&B1,&B2,&B3);
    key_xor(31,&B0,&B1,&B2,&B3); SBoxE8(&B0,&B1,&B2,&B3);
    key_xor(32,&B0,&B1,&B2,&B3);

    store_le(dst,    B0);
    store_le(dst+4,  B1);
    store_le(dst+8,  B2);
    store_le(dst+12, B3);
}

char data[1024];
char dest[1024];

int main(int argc, char **argv)
{
	my_srand(12345);
	unsigned iterations = 10000;
	if (argc > 1)
		iterations = atoi(argv[1]);

	printf("Initialize...\n");
	size_t d;
	for (d = 0; d < sizeof(data)/sizeof(data[0]); ++d) {
		data[d] = my_rand();
	}
	printf("ok, running %u iterations\n", iterations);
	unsigned i;
	for (i = 0; i < iterations; ++i) {
		for (d = 0; d < sizeof(data)/sizeof(data[0]); d += 16) {
			encrypt_block(data+d, dest+d);
		}
	}

	uint32_t checksum = 0;
	for (d = 0; d < sizeof(data)/sizeof(data[0]); d += sizeof(uint32_t)) {
		checksum ^= load_le(data + d);
	}
	printf("Checksum: %u\n", (unsigned)checksum);
	return 0;
}
