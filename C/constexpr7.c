#include <math.h>
#include <assert.h>

float x[2] = { INFINITY, NAN };

int main(void)
{
	assert(x[0] == INFINITY);
	assert(x[1] != NAN);
	return 0;
}
