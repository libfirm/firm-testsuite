#include <math.h>
#include <assert.h>

float x = 42.42;
float y = NAN;

int main(void)
{
	double z = y;
	/* constant folding with NANs... */
	assert(isnan(NAN + x));
	assert(isnan(NAN - x));
	assert(isnan(NAN / x));
	assert(isnan(NAN * x));
	assert(isnan(NAN - NAN));
	assert(isnan(0 * NAN));
	if (!(z == 0)) {
		assert(isnan(0.f/z));
	}
	return 0;
}
