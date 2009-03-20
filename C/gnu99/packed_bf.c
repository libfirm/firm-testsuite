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

typedef struct BF6_unpacked {
	unsigned b1 : sizeof(unsigned)*8 - 5;
	unsigned b2 : 9;
	char     p;
} BF6_unpacked;

typedef struct BF6_packed {
	unsigned b1 : sizeof(unsigned)*8 - 5;
	unsigned b2 : 9;
	char     p;
} __attribute__((packed)) BF6_packed;

#define offsetof(type,member) ( (char*) &(((type*)0)->member) - ((char*)0) )

int main(void)
{
	assert(sizeof(packed) < sizeof(unpacked));
	assert(sizeof(packed) == 1);
	assert(sizeof(BF6_unpacked) == 2*sizeof(unsigned));
	assert(offsetof(BF6_unpacked, p) == sizeof(unsigned)+2);
	assert(offsetof(BF6_packed, p) == sizeof(unsigned)+1);
	return 0;
}
