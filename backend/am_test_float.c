#include <stdio.h>

float val_float;
double val_double;

void __attribute__((noinline)) inc(void)
{
	val_float++;
	val_double++;
}

#define TTYPE(name,type,OP) \
	type __attribute__((noinline)) test_##name##type(void)     { type r = val_##type; r = r OP 7; inc(); return r; }  \
	type __attribute__((noinline)) test2_##name##type(type v)  { type r = val_##type; r = r OP v; inc(); return r; }  \
	type __attribute__((noinline)) testp_##name##type(void)    { type r = val_##type; r = 7 OP r; inc(); return r; }  \
	type __attribute__((noinline)) testp2_##name##type(type v) { type r = val_##type; r = v OP r; inc(); return r; }

#define T(name,OP) \
	TTYPE(name,float,OP) \
	TTYPE(name,double,OP)

T(add,+)
T(sub,-)
T(mul,*)
T(div,/)
T(cmp,<)

#undef T
#undef TTYPE

int main(void) {
	double res1, res2, res3, res4;
	val_float = 11;
	val_double = 42;

#define TTYPE(name,type)          \
	res1 = test_##name##type();   \
	res2 = test2_##name##type(20); \
	res3 = testp_##name##type();   \
	res4 = testp2_##name##type(20); \
	printf("Test %s: %f\n", #name, res1);   \
	printf("Test2 %s: %f\n", #name, res2); \
	printf("Testp %s: %f\n", #name, res3);   \
	printf("Testp2 %s: %f\n", #name, res4);

#define T(name) \
	TTYPE(name,float) \
	TTYPE(name,double)

	T(add)
	T(sub)
	T(mul)
	T(div)
	T(cmp)

	return 0;
}
