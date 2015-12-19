#include <limits.h>
#include <float.h>
#include <assert.h>
#include <stdint.h>
#include <stddef.h>

#define CLOBBER(type, volatile_var) \
	type t00 = volatile_var; \
	type t01 = volatile_var; \
	type t02 = volatile_var; \
	type t03 = volatile_var; \
	type t04 = volatile_var; \
	type t05 = volatile_var; \
	type t06 = volatile_var; \
	type t07 = volatile_var; \
	type t08 = volatile_var; \
	type t09 = volatile_var; \
	type t10 = volatile_var; \
	type t11 = volatile_var; \
	type t12 = volatile_var; \
	type t13 = volatile_var; \
	type t14 = volatile_var; \
	type t15 = volatile_var; \
	type t16 = volatile_var; \
	type t17 = volatile_var; \
	type t18 = volatile_var; \
	type t19 = volatile_var; \
	type t20 = volatile_var; \
	type t21 = volatile_var; \
	type t22 = volatile_var; \
	type t23 = volatile_var; \
	type t24 = volatile_var; \
	type t25 = volatile_var; \
	type t26 = volatile_var; \
	type t27 = volatile_var; \
	type t28 = volatile_var; \
	type t29 = volatile_var; \
	type t30 = volatile_var; \
	type t31 = volatile_var; \
	type t32 = volatile_var; \
	volatile_var = t00;      \
	volatile_var = t01;      \
	volatile_var = t02;      \
	volatile_var = t03;      \
	volatile_var = t04;      \
	volatile_var = t05;      \
	volatile_var = t06;      \
	volatile_var = t07;      \
	volatile_var = t08;      \
	volatile_var = t09;      \
	volatile_var = t10;      \
	volatile_var = t11;      \
	volatile_var = t12;      \
	volatile_var = t13;      \
	volatile_var = t14;      \
	volatile_var = t15;      \
	volatile_var = t16;      \
	volatile_var = t17;      \
	volatile_var = t18;      \
	volatile_var = t19;      \
	volatile_var = t20;      \
	volatile_var = t21;      \
	volatile_var = t22;      \
	volatile_var = t23;      \
	volatile_var = t24;      \
	volatile_var = t25;      \
	volatile_var = t26;      \
	volatile_var = t27;      \
	volatile_var = t28;      \
	volatile_var = t29;      \
	volatile_var = t30;      \
	volatile_var = t31;      \
	volatile_var = t32;      \

volatile int dummy_i;
volatile double dummy_d;
volatile long double dummy_ld;

void __attribute__((noinline)) clobber(void) {
	{ CLOBBER(int, dummy_i); }
	{ CLOBBER(double, dummy_d); }
	{ CLOBBER(long double, dummy_ld); }
}

#define TEST(suffix, type, value)                 \
    volatile type x_##suffix = value;             \
    type get_##suffix(void) {                     \
        type t = x_##suffix;                      \
        /* Need to spill t around this call */    \
        clobber();                                \
        return t;                                 \
    }

TEST(ld, long double, LDBL_EPSILON)
TEST(d, double, DBL_EPSILON)
TEST(f, float, FLT_EPSILON)
TEST(sc, signed char, SCHAR_MIN)
TEST(uc, unsigned char, UCHAR_MAX)
TEST(ss, signed short, SHRT_MIN)
TEST(us, unsigned short, USHRT_MAX)
TEST(si, signed int, INT_MIN)
TEST(ui, unsigned int, UINT_MAX)
TEST(sl, signed long, LONG_MIN)
TEST(ul, unsigned long, ULONG_MAX)
TEST(sll, signed long long, LLONG_MIN)
TEST(ull, unsigned long long, ULLONG_MAX)

int main(void) {
#define CHECK(suffix)  assert(get_##suffix() == x_##suffix)
	CHECK(ld);
	CHECK(d);
	CHECK(f);
	CHECK(sc);
	CHECK(uc);
	CHECK(ss);
	CHECK(us);
	CHECK(si);
	CHECK(ui);
	CHECK(sl);
	CHECK(ul);
	CHECK(sll);
	CHECK(ull);
	return 0;
}
