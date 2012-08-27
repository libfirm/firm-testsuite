#include <limits.h>
#include <float.h>
#include <stdio.h>

typedef unsigned short ushort;
typedef signed char    schar;
typedef unsigned char  uchar;
typedef long long      llong;
typedef unsigned long long ullong;
typedef unsigned int   uint;

#define mod_llong    "%lld"
#define mod_ullong   "%llu"
#define mod_int      "%d"
#define mod_uint     "%u"
#define mod_short    "%d"
#define mod_ushort   "%u"
#define mod_schar    "%d"
#define mod_uchar    "%u"
#define mod_float    "%f"
#define mod_double   "%f"
llong  llong_max  =LLONG_MAX;
llong  llong_min  =LLONG_MIN;
llong  llong_null =0;
llong  llong_mone =-1;
ullong ullong_max =ULLONG_MAX;
ullong ullong_min =0;
ullong ullong_null=0;
ullong ullong_mone=(unsigned long long)-1;
int int_max       =INT_MAX;
int int_min       =INT_MIN;
int int_null      =0;
int int_mone      =-1;
uint uint_max     =UINT_MAX;
uint uint_min     =0;
uint uint_null    =0;
uint uint_mone    =(uint)-1;
short short_max   =SHRT_MAX;
short short_min   =SHRT_MIN;
short short_null  =0;
short short_mone  =-1;
ushort ushort_max =USHRT_MAX;
ushort ushort_min =0;
ushort ushort_null=0;
ushort ushort_mone=(ushort)-1;
schar schar_min   =SCHAR_MIN;
schar schar_max   =SCHAR_MAX;
schar schar_null  =0;
schar schar_mone  =-1;
uchar uchar_min   =0;
uchar uchar_max   =UCHAR_MAX;
uchar uchar_null  =0;
uchar uchar_mone  =(uchar)-1;
float float_min   =-FLT_MAX;
float float_max   =FLT_MAX;
float float_null  =0.0f;
float float_mone  =-1.0f;
double double_min =-DBL_MAX;
double double_max =DBL_MAX;
double double_null=0.0;
double double_mone=-1.0;

#define ct(n, t0, t1, t2)   \
static void __attribute__((noinline)) test_ ## n(void) { \
	printf(#t0 " -> " #t1 " -> " #t2 "\n"); \
	printf("\t0:   " mod_ ## t2 "\n", (t2)(t1)t0 ## _null); \
	printf("\t-1:  " mod_ ## t2 "\n", (t2)(t1)t0 ## _mone); \
	printf("\tmax: " mod_ ## t2 "\n", (t2)(t1)t0 ## _max); \
	printf("\tmin: " mod_ ## t2 "\n", (t2)(t1)t0 ## _min); \
}

#define perm(n, t0, t1, t2) \
ct(n ## _0, t0, t1, t2) \
ct(n ## _1, t0, t2, t1) \
ct(n ## _2, t1, t0, t2) \
ct(n ## _3, t1, t2, t0) \
ct(n ## _4, t2, t0, t1) \
ct(n ## _5, t2, t1, t0)

#define showperm(n) \
test_ ## n ## _0(); \
test_ ## n ## _1(); \
test_ ## n ## _2(); \
test_ ## n ## _3(); \
test_ ## n ## _4(); \
test_ ## n ## _5();

perm(0, int,  short,  schar)
perm(1, uint, ushort, uchar)
perm(2, uint, int,    uint)
perm(3, int,  ushort, schar)
perm(4, uint, short,  uchar)

perm(5,  float,  double, double)
perm(6,  double, float,  float)
/* disabled float/int checks for now as the overflow behaviour is heavily
 * compiler+architecture specific... */
#if 0
perm(7,  float,  double, llong)
perm(8,  float,  double, ullong)
perm(9,  float,  double, short)
perm(10, float,  double, ushort)
perm(11, llong,  int,    double)
perm(12, llong,  int,    float)
perm(13, short,  int,    float)
perm(14, ushort, int,    double)
#endif

int main(void)
{
	showperm(0);
	showperm(1);
	showperm(2);
	showperm(3);
	showperm(4);
	showperm(5);
	showperm(6);
#if 0
	showperm(7);
	showperm(8);
	showperm(9);
	showperm(10);
	showperm(11);
	showperm(12);
	showperm(13);
	showperm(14);
#endif
	return 0;
}
