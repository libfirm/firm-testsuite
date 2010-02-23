#include <stdio.h>
#include <limits.h>

int one = 1;
int null = 0;

int t42 = 42;
int t0 = 0;
int t1 = 1;
int tm1 = -1;
int tmax = INT_MAX;
int tmin = INT_MIN;

int main(void)
{
	int o = one;
	int n = null;

#define TEST(OP) \
	printf("0   " #OP " 0   = %d\n", t0   OP t0   ? o : n); \
	printf("0   " #OP " 42  = %d\n", t0   OP t42  ? o : n); \
	printf("0   " #OP " 1   = %d\n", t0   OP t1   ? o : n); \
	printf("0   " #OP " -1  = %d\n", t0   OP tm1  ? o : n); \
	printf("0   " #OP " max = %d\n", t0   OP tmax ? o : n); \
	printf("0   " #OP " min = %d\n", t0   OP tmin ? o : n); \
	printf("1   " #OP " 42  = %d\n", t1   OP t42  ? o : n); \
	printf("1   " #OP " 0   = %d\n", t1   OP t0   ? o : n); \
	printf("1   " #OP " -1  = %d\n", t1   OP tm1  ? o : n); \
	printf("-1  " #OP " 1   = %d\n", tm1  OP t1   ? o : n); \
	printf("-1  " #OP " 0   = %d\n", tm1  OP t0   ? o : n); \
	printf("min " #OP " min = %d\n", tmin OP tmin ? o : n); \
	printf("min " #OP " 0   = %d\n", tmin OP t0   ? o : n); \
	printf("min " #OP " -1  = %d\n", tmin OP tm1  ? o : n); \
	printf("min " #OP " max = %d\n", tmin OP tmax ? o : n); \
	printf("max " #OP " max = %d\n", tmax OP tmax ? o : n); \
	printf("max " #OP " 0   = %d\n", tmax OP t0   ? o : n); \
	printf("max " #OP " 1   = %d\n", tmax OP t1   ? o : n); \
	printf("max " #OP " min = %d\n", tmax OP tmin ? o : n);

	TEST(==);
	TEST(!=);
	TEST(<);
	TEST(<=);
	TEST(>);
	TEST(>=);

	return o*n;
}
