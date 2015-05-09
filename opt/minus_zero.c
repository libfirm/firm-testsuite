#include <assert.h>
#include <stdbool.h>
#include <string.h>

bool __attribute__((noinline)) bitwise_equalf(float a, float b)
{
	/* we must use memcmp instead of == as the later would ignores the
	 * difference between 0 and -0. */
	return memcmp(&a, &b, sizeof(a)) == 0;
}

bool __attribute__((noinline)) bitwise_equal(double a, double b)
{
	/* we must use memcmp instead of == as the later would ignores the
	 * difference between 0 and -0. */
	return memcmp(&a, &b, sizeof(a)) == 0;
}

double __attribute__((noinline)) add_minus_zero(double x)
{
	/* can be optimized to just 'x' */
	return x + (-0.0);
}

double __attribute__((noinline)) sub_minus_zero(double x)
{
	/* cannot be optimized to just 'x' */
	return x - (-0.0);
}

float __attribute__((noinline)) add_minus_zerof(float x)
{
	/* can be optimized to just 'x' */
	return x + (-0.0f);
}

float __attribute__((noinline)) sub_minus_zerof(float x)
{
	/* cannot be optimized to just 'x' */
	return x - (-0.0f);
}

double __attribute__((noinline)) add_zero(double x)
{
	/* cannot be optimized to just 'x'! */
	return x + 0.0;
}

double __attribute__((noinline)) sub_zero(double x)
{
	/* can be optimized to just 'x' */
	return x - 0.0;
}

float __attribute__((noinline)) add_zerof(float x)
{
	/* cannot be optimized to just 'x'! */
	return x + 0.0f;
}

float __attribute__((noinline)) sub_zerof(float x)
{
	/* can be optimized to just 'x' */
	return x - 0.0f;
}

int main(void)
{
	{
	float zerof       = 0.0f;
	float minus_zerof = -0.0f;
	assert(!bitwise_equalf(zerof, minus_zerof));

	/* some constant folding */
	assert(bitwise_equalf(minus_zerof + 20.f, 20.f));
	assert(bitwise_equalf(minus_zerof + zerof, zerof));
	assert(bitwise_equalf(zerof + minus_zerof, zerof));
	assert(bitwise_equalf(zerof + zerof, zerof));
	assert(bitwise_equalf(minus_zerof + minus_zerof, minus_zerof));
	/* ensure optimisation did not mess up */
	assert(!bitwise_equalf(add_zerof(minus_zerof), minus_zerof));
	assert(bitwise_equalf(add_minus_zerof(minus_zerof), minus_zerof));
	assert(bitwise_equalf(add_minus_zerof(zerof), zerof));
	assert(bitwise_equalf(sub_zerof(minus_zerof), minus_zerof));
	assert(bitwise_equalf(sub_minus_zerof(minus_zerof), zerof));
	}

	{
	double zero       = 0.0;
	double minus_zero = -0.0;
	assert(!bitwise_equal(zero, minus_zero));

	/* some constant folding */
	assert(!bitwise_equal(zero, minus_zero));
	assert(bitwise_equal(minus_zero + 20., 20.));
	assert(bitwise_equal(minus_zero + zero, zero));
	assert(bitwise_equal(zero + minus_zero, zero));
	assert(bitwise_equal(zero + zero, zero));
	assert(bitwise_equal(minus_zero + minus_zero, minus_zero));
	/* ensure optimisation did not mess up */
	assert(!bitwise_equal(add_zero(minus_zero), minus_zero));
	assert(bitwise_equal(add_minus_zero(minus_zero), minus_zero));
	assert(bitwise_equal(add_minus_zero(zero), zero));
	assert(bitwise_equal(sub_zero(minus_zero), minus_zero));
	assert(bitwise_equal(sub_minus_zero(minus_zero), zero));
	}

	return 0;
}
