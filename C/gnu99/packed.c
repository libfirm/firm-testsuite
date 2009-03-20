#include <assert.h>

typedef struct unpacked {
	char a;
	int b;
} unpacked;

typedef struct packed {
	char a;
	int b;
} __attribute__((packed)) packed;

int main(void)
{
	assert(sizeof(packed) < sizeof(unpacked));
	assert(sizeof(packed) == sizeof(char)+sizeof(int));
	return 0;
}
