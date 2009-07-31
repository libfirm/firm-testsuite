#include <stdlib.h>
#include <stdio.h>

#define T_(op1, op2, va, vb, vc)       a = va; b = vb; c = vc; \
	printf("Test: (%d %s %d) %s (%d %s %d) -> ", a, #op1, c, #op2, b, #op1, c);\
	printf("%d\n", ((a op1 c) op2 (b op1 c)));

#define T(op1, op2)	T_(op1, op2, rand(), rand(), rand()) T_(op1, op2, rand(), rand(), 42)

#define TU_(op1, op2, va, vb)     a = va; b = vb; \
	printf("Test: (%s %d) %s (%s %d) -> ", #op1, a, #op2, #op1, b); \
	printf("%d\n", ((op1 a) op2 (op1 b)));

#define TU(op1, op2) TU_(op1, op2, rand(), rand())

#define TT(op)	T(&,op); T(|,op); T(^,op); T(&&,op); T(||,op); T(*,op); T(/,op); T(%,op); T(+,op); T(-,op); TU(-,op); TU(!,op);

#define TS(op)  T(&,op); T(|,op); T(^,op); T(&&,op); T(||,op); T(*,op); T(+,op); T(-,op); TU(-,op);

int main()
{
	int a, b, c;
	srand(1234);

	TT(&);
	TT(|);
	TT(^);
	TT(&&);
	TT(||);
	TT(*);
	TS(/);
	TS(%);
	TT(+);
	TT(-);

	return 0;
}
