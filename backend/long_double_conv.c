#include <float.h>
#include <math.h>
#include <stdio.h>
#include <limits.h>

static long double __attribute__((noinline)) f_to_ld(float val) {
	return val;
}

static long double __attribute__((noinline)) d_to_ld(double val) {
	return val;
}

static long double __attribute__((noinline)) c_to_ld(signed char val) {
	return val;
}

static long double __attribute__((noinline)) ll_to_ld(long long val) {
	return val;
}

static float __attribute__((noinline)) ld_to_f(long double val) {
	return val;
}

static double __attribute__((noinline)) ld_to_d(long double val) {
	return val;
}

static signed char __attribute__((noinline)) ld_to_c(long double val) {
	return val;
}

static int __attribute__((noinline)) ld_to_i(long double val) {
	return val;
}

static long long __attribute__((noinline)) ld_to_ll(long double val) {
	return val;
}

#define ARRAY_SIZE(x)  (sizeof(x)/sizeof(x[0]))

int main(void) {
	static float fvals[] = { -1.f, 0.f, -0.0f, 42.f, FLT_MIN, FLT_MAX,
		FLT_EPSILON, INFINITY, HUGE_VALF, FLT_MIN * FLT_EPSILON };

	printf("# float -> long double\n");
	for (size_t i = 0; i < ARRAY_SIZE(fvals); ++i) {
		float val = fvals[i];
		printf("%a -> %La\n", val, f_to_ld(val));
	}

	static double dvals[] = { -1., 0., -0.0f, 42., DBL_MIN, DBL_MAX,
		DBL_EPSILON, INFINITY, HUGE_VAL };

	printf("\n# double -> long double\n");
	for (size_t i = 0; i < ARRAY_SIZE(dvals); ++i) {
		double val = dvals[i];
		printf("%a -> %La\n", val, d_to_ld(val));
	}
	double denorm = DBL_MIN * DBL_EPSILON;
	printf("denorm -> %La\n", d_to_ld(denorm));

	static signed char cvals[] = { -128, -127, -64, -1, 0, 1, 2, 4, 6, 16, 32,
		42, 64, 126, 127 };
	printf("\n# char -> long double\n");
	for (size_t i = 0; i < ARRAY_SIZE(cvals); ++i) {
		signed char val = cvals[i];
		printf("%d -> %La\n", val, c_to_ld(val));
	}

	static long long llvals[] = { LLONG_MIN+1, -127, -64, -1, 0, 1, 2, 4, 6, 16,
		32, 42, 64, 126, 127, 128, 0x5555555555555555ull,
		0xAAAAAAAAAAAAAAAAull, LLONG_MAX };
	printf("\n# long long -> long double\n");
	for (size_t i = 0; i < ARRAY_SIZE(llvals); ++i) {
		long long val = llvals[i];
		printf("%lld -> %La\n", val, c_to_ld(val));
	}

	static long double ldvals[] = { -42, 13.13, -77.77, 1.5, 2.99999999 };
	printf("\n# long double -> int\n");
	for (size_t i = 0; i < ARRAY_SIZE(ldvals); ++i) {
		long double val = ldvals[i];
		printf("%La -> %d\n", val, ld_to_i(val));
	}

	return 0;
}
