#include <stdio.h>

#define RES_FORMAT "%lld"

#undef tname
#undef T
#define tname(x) x##long_long
#define T long long
#include "optest.h"

#define TEST_UNSIGNED
#undef RES_FORMAT
#define RES_FORMAT "%llu"

#undef tname
#undef T
#define tname(x) x##unsigned_long_long
#define T unsigned long long
#include "optest.h"

int main(int argc, char *argv[])
{
	test_unsigned_long_long();
	test_long_long();
	return 0;
}
