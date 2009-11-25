#include <stdio.h>

#define TTYPE(name, type, OP, OP2) \
void dest_am_##name##type(type *arr, int from, int to) {  \
	int i;                                  \
                                            \
	for(i = from; i < to; ++i) {            \
		arr[i] = OP arr[i] OP2;             \
	}                                       \
}

#define T(name, OP, OP2)     \
	TTYPE(name,float,OP,OP2)   \
	TTYPE(name,double,OP,OP2)

T(neg, -,)
T(add, 3 +,)
T(sub, , - 42)
T(inc, 1 + ,)
T(dec, , - 1)

int main(void) {
	float  arrfloat[] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5 };
	double arrdouble[] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5 };

	int i;

#define CTYPE(type,name)   dest_am_##name##type(arr##type, 0, 10); \
	for(i = 0; i < 10; ++i) {                 \
		printf("%f ", arr##type[i]);          \
	}                                         \
	printf("\n");

#define C(name) \
	CTYPE(float,name) \
	CTYPE(double,name)

	C(neg);
	C(add);
	C(sub);
	C(inc);
	C(dec);

	return 0;
}
