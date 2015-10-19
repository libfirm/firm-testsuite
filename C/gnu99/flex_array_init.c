#include <stddef.h>
#include <assert.h>

#define FOURCC(a,b,c,d)         ((a) | ((b) << 8) | ((c) << 16) | ((d) << 24))
typedef union {
	long double d;
	void       *p;
	long        l;
} aligned_type;

typedef struct {
	int magic;
	size_t allocated;
	size_t nelts;
	aligned_type elts[];
} ir_arr_descr;

ir_arr_descr init0 = { FOURCC('A','R','R','D'), 1, 1, { { 0 } } };
ir_arr_descr init1 = { FOURCC('A','R','R','F'), 0, 0 };
ir_arr_descr init2 = { FOURCC('F','O','O','B'), 42, 111, { { .l = 42 }, { .p = &init1 }, { .d = 42.42 } } };
ir_arr_descr init3 = { FOURCC('B','A','Z','Z'), (size_t)-1, 7, { [13] = { .l = 13 }, { .p = &init1 }, [3] = { .p = &init0 } } };

struct S3 {
  char a3c;
  char a3p[];
} init4 = {
  'o',
  "wx"
};

int main(void)
{
	assert(init0.magic == 0x44525241);
	assert(init0.allocated == 1);
	assert(init0.nelts == 1);
	assert(init0.elts[0].d == 0.0);

	assert(init1.magic == 0x46525241);
	assert(init1.allocated == 0);
	assert(init1.nelts == 0);

	assert(init2.magic == 0x424f4f46);
	assert(init2.allocated == 42);
	assert(init2.nelts == 111);
	assert(init2.elts[0].l == 42);
	assert(init2.elts[1].p == &init1);
	assert(init2.elts[2].d == 42.42);

	assert(init3.magic == 0x5a5a4142);
	assert(init3.allocated == (size_t)-1);
	assert(init3.nelts == 7);
	assert(init3.elts[0].l == 0);
	assert(init3.elts[1].p == (void*)0);
	assert(init3.elts[2].d == 0.0);
	assert(init3.elts[3].p == &init0);
	assert(init3.elts[4].l == 0);
	assert(init3.elts[13].l == 13);
	assert(init3.elts[14].p == &init1);
	assert(sizeof(init3) == sizeof(int) + (sizeof(size_t)-sizeof(int))
		   + sizeof(size_t) + sizeof(size_t) + (__alignof__(aligned_type) - (3*sizeof(size_t))%__alignof__(aligned_type)));

	assert(init4.a3c == 'o');
	assert(init4.a3p[0] == 'w');
	assert(init4.a3p[1] == 'x');

	return 0;
}
