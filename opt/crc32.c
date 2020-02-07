/*$ cflags -funroll-loops -funroll-factor=8 -funroll-max-size=256 $*/
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define CRC32MASK   0x04C11DB7        /* CRC-32 Bitmaske */
#define FINAL_XOR 0xFFFFFFFF
#define INITIAL 0xFFFFFFFF
#define BYTECOUNT 4

uint32_t bitstream = 0x12345678;

uint32_t crc32(uint32_t input)
{
    uint32_t crc32 = INITIAL;
    uint32_t byte;
    uint32_t mask;
    for (int i = 0; i < BYTECOUNT; i++)
    {
        byte = (input >> ((BYTECOUNT - (i + 1)) * 8)) & 0xFF;
        crc32 = crc32 ^ byte;
        for (int j = 7; j>=0; j--) {
            mask = -(crc32 & 1);
            crc32 = (crc32 >> 1) ^ (0xEDB88320 & mask);
        }
    }
    return ~crc32;
}

int main (int argc, char **argv)
{
    printf("0x%x\n", crc32(bitstream));
    return EXIT_SUCCESS;
}
