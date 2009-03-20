#include <stdio.h>
#include <assert.h>

#define offsetof(type,member) ( (char*) &(((type*)NULL)->member) - ((char*)NULL) )

struct X {
	char a;
	int  b;
	char c;
};
struct B {
	char a,b,c,d;
};
struct C {
	float l;
};
struct D {
	int m;
	int l[];
};
struct BF {
	unsigned char b1 : 6;
	unsigned char b2 : 6;
	unsigned char b3 : 6;
	unsigned char b4 : 6;
	unsigned char b5 : 6;
	unsigned char b6 : 6;
	unsigned char b7 : 6;
	unsigned char b8 : 6;
};
struct BF2 {
	unsigned b1 : 1;
	unsigned : 0;
	unsigned b2 : 1;
	unsigned : 0;
	unsigned : 0;
	unsigned : 0;
	unsigned b3 : 1;
};
struct BF3 {
	unsigned b1 : 1;
	int      b2 : 2;
};
struct BF4 {
	unsigned b1 : 1;
	char     b2 : 2;
};

struct BF5 {
	unsigned b1 : 4;
	int b2 : 4;
	unsigned b3 : 4;
	int b4 : 4;
	unsigned b5 : 4;
	int b6 : 4;
	unsigned b7 : 4;
	int b8 : 4;
};
struct BF6 {
	unsigned b1 : sizeof(unsigned)*8 - 5;
	unsigned b2 : 9;
	char     p;
};

int main(void)
{
	assert(offsetof(struct X, a) == 0);
	assert(offsetof(struct X, b) == sizeof(int));
	assert(offsetof(struct X, c) == 2*sizeof(int));
	assert(offsetof(struct BF6, p) == sizeof(unsigned)+2);

	assert(sizeof(struct B) == 4);
	assert(sizeof(struct D) == sizeof(int));
	assert(sizeof(struct BF) == 8);
	assert(sizeof(struct BF2) == 3*sizeof(unsigned));
	assert(sizeof(struct BF3) == sizeof(unsigned));
	assert(sizeof(struct BF4) == sizeof(unsigned));
	assert(sizeof(struct BF5) == sizeof(unsigned));

	assert(__alignof__(struct X) == sizeof(int));
	assert(__alignof__(struct B) == sizeof(char));
	assert(__alignof__(struct C) == sizeof(float));
	assert(__alignof__(struct D) == sizeof(int));
	assert(__alignof__(struct BF3) == sizeof(unsigned));
	assert(__alignof__(struct BF4) == sizeof(unsigned));
	return 0;
}
