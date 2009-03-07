#include <assert.h>

struct __attribute__((packed)) A1 { char x; int y; }; // applied to struct
__attribute__((packed)) struct A2 { char x; int y; }; // ignored
struct A3 { char x; int y; } __attribute__((packed)); // applied to struct
struct _A4 { char x; int y; };
typedef struct _A4 __attribute__((packed)) A4; // ignored

int main(void)
{
#define CHECK_PACKED(x)   assert(sizeof(x) == sizeof(char)+sizeof(int))
#define CHECK_NOT_PACKED(x)  assert(sizeof(x) != sizeof(char)+sizeof(int))
	CHECK_PACKED(struct A1);
	CHECK_NOT_PACKED(struct A2);
	CHECK_PACKED(struct A3);
	CHECK_NOT_PACKED(A4);

	return 0;
}
