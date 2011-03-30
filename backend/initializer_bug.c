#include <stdlib.h>

typedef union {
	long double d;
	void *p;
	long l;
} aligned_type;

typedef struct {
	int magic;
	aligned_type elts[1];
} ir_arr_descr;

extern ir_arr_descr arr_mt_descr;
/* firm backend failed to output initializer here for the long double
 * in the union here */
ir_arr_descr arr_mt_descr = { 'A'<<8, { { 42 } } };

int main(void)
{
	return arr_mt_descr.elts[0].d == 42 ? 0 : 1;
}
