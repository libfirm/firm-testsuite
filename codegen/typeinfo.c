#include <stdio.h>
#include <stddef.h>
#include <limits.h>

typedef enum {
	NA = -1,
	NB = 2,
} EnumWithNegatives;

typedef enum {
	PA = 0,
	PB = INT_MAX
} EnumPositive;

typedef enum {
	UA = 0,
	UB = UINT_MAX
} EnumUnsigned;

typedef struct {
	unsigned long long a[2];
} lla;

typedef struct {
	double a;
} ds;

typedef struct {
	double a[2];
} da;

#define is_signed(type)  ((type)-1<0)
#define struct_align(t)  ((sizeof (t) > 1)? offsetof(struct { char c; typeof(t) x; }, x) : 1)

int main(void)
{
	#define PRINT_TYPEINFO(type) \
		printf("%-20s signed:%d  size:%2u  alignment:%2u  alignment(struct):%2u\n", #type, is_signed(type), (unsigned)sizeof(type), (unsigned)__alignof(type), (unsigned)struct_align(type));
	#define PRINT_TYPEINFO_NOSIGN(type) \
		printf("%-20s size:%2u  alignment:%2u  alignment(struct):%2u\n", #type, (unsigned)sizeof(type), (unsigned)__alignof(type), (unsigned)struct_align(type));

	PRINT_TYPEINFO(char);
	PRINT_TYPEINFO(signed char);
	PRINT_TYPEINFO(unsigned char);
	PRINT_TYPEINFO(short);
	PRINT_TYPEINFO(signed short);
	PRINT_TYPEINFO(unsigned short);
	PRINT_TYPEINFO(int);
	PRINT_TYPEINFO(signed int);
	PRINT_TYPEINFO(long);
	PRINT_TYPEINFO(signed long);
	PRINT_TYPEINFO(unsigned int);
	PRINT_TYPEINFO(unsigned long);
	PRINT_TYPEINFO(long long);
	PRINT_TYPEINFO(unsigned long long);
	PRINT_TYPEINFO(EnumWithNegatives);
	PRINT_TYPEINFO(EnumPositive);
	PRINT_TYPEINFO(EnumUnsigned);
	PRINT_TYPEINFO(void*);
	PRINT_TYPEINFO(void(*)(void));
	PRINT_TYPEINFO(float);
	PRINT_TYPEINFO(double);
	PRINT_TYPEINFO(long double);
	PRINT_TYPEINFO_NOSIGN(lla);
	PRINT_TYPEINFO_NOSIGN(ds);
	PRINT_TYPEINFO_NOSIGN(da);
}
