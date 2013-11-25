#include <assert.h>

int printf(const char *str, ...);

int main(void)
{
	int array[4];
	unsigned st = sizeof(array + 1);
	assert(sizeof(array+1) == sizeof(void*));
	assert(sizeof(array) == sizeof(int)*4);
	assert(sizeof(*&array) == sizeof(int)*4);
	assert(sizeof( (array) ) == sizeof(int)*4);
	return 0;
}
