#include <assert.h>

/* Triggers on a recurrent bug during convopt-ng development that made
   the PostgreSQL testsuite fail.

   Extracted from postgresql/src/timezone/localtime.c
*/

typedef long long int int64;
typedef int64 pg_time_t;

pg_time_t
detzcode64(const char *codep)
{
	pg_time_t result;
	int i;

	result = (codep[0] & 0x80) ? (~(int64) 0) : 0;
	for (i = 0; i < 8; ++i)
		result = result * 256 + (codep[i] & 0xff);
	return result;
}

int main(int argc, char *argv[])
{
  int64 x = 0x8000000000000000LL;
  assert(detzcode64((char *)&x) == 0x80);
  return 0;
}
