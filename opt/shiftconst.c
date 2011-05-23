int printf(const char *str, ...);

#define T        unsigned
#define tname(x) u_##x
#include "shiftconst.h"
#undef tname
#undef T

#define T        int
#define tname(x) i_##x
#include "shiftconst.h"
#undef tname
#undef T

#define T        long long
#define tname(x) ll_##x
#include "shiftconst.h"
#undef tname
#undef T

#define T        signed char
#define tname(x) sc_##x
#include "shiftconst.h"
#undef tname
#undef T

int main(void)
{
#define TEST(x,format)    printf(#x "(0xAABBCCDD) = 0x" format "\n", x(0xAABBCCDD))
#define ALLTESTS(pf,format)  \
	TEST(pf##k1, format); \
	TEST(pf##k2, format); \
	TEST(pf##k3, format); \
	TEST(pf##k4, format); \
	TEST(pf##k5, format); \
	TEST(pf##k6, format); \
	TEST(pf##k7, format); \
	TEST(pf##k8, format);

	ALLTESTS(u_, "%X");
	ALLTESTS(i_, "%X");
	ALLTESTS(ll_, "%llX");
	ALLTESTS(sc_, "%X");
	return 0;
}
