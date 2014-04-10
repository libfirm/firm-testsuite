#include <assert.h>

// inspired by musl tgmath.h macros
#define __type1(c,t) __typeof__(*(0?(t*)0:(void*)!(c)))
#define __type2(c,t1,t2) __typeof__(*(0?(__type1(c,t1)*)0:(__type1(!(c),t2)*)0))

#define typeeq(t0,t1) __builtin_classify_type(*(t0*)0) == __builtin_classify_type(*(t1*)0) && __extension__ sizeof(t0) == __extension__ sizeof(t1)

int main(void)
{
	assert(typeeq(__type1(1, float), float));
	assert(typeeq(__type1(1, long long unsigned), long long unsigned));
	assert(typeeq(__type1(1, long double), long double));
	assert(typeeq(__type1(0, short), void));
	assert(typeeq(__type1(1, void), void));
	assert(typeeq(__type2(0, float, double), double));
	assert(typeeq(__type2(1, float, double), float));
	assert(typeeq(__type2(typeeq(int, signed int), unsigned, signed), unsigned int));
	return 0;
}
