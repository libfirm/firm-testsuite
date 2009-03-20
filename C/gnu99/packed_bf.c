#include <assert.h>

typedef struct unpacked {
	unsigned      b0 : 4;
	int           b1 : 2;
	unsigned char b2 : 1;
	signed char   b3 : 1;
} unpacked;

typedef struct packed {
	unsigned      b0 : 4;
	unsigned         : 0;
	int           b1 : 2;
	unsigned         : 0;
	unsigned         : 0;
	unsigned char b2 : 1;
	signed char   b3 : 1;
} __attribute__((packed)) packed;


int main(void)
{
	assert(sizeof(packed) < sizeof(unpacked));
	assert(sizeof(packed) == 1);
	return 0;
}
