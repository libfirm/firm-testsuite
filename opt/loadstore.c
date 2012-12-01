/* test load after store optimisation with different modes */
#include <stdint.h>
#include <stdio.h>
#include "my_endian.h"

int main(void)
{
	uint32_t v32 = 0x12345678;
	uint8_t  *p = (uint8_t*)&v32;
	uint16_t *l = (uint16_t*)&v32;
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
	printf("%X %X %X %X\n", p[0], p[1], p[2], p[3]);
	printf("%X %X\n", l[0], l[1]);
#else
	printf("%X %X %X %X\n", p[3], p[2], p[1], p[0]);
	printf("%X %X\n", l[1], l[0]);
#endif

	uint16_t v16 = 0xABCD;
	unsigned char *k = (unsigned char*)&v16;
#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
	printf("%X %X\n", k[0], k[1]);
#else
	printf("%X %X\n", k[1], k[0]);
#endif
}
