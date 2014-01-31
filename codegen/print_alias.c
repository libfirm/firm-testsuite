#include <stddef.h>
#include <assert.h>

unsigned glob0;
unsigned glob1;
unsigned *any0 = (unsigned*)0x1234;
unsigned *any1;
float    *anyf0;
#define null ((void*)0)

int val0;
int val1;

extern void *malloc(size_t sz) __attribute__((malloc));

int main(int param0, char **param1)
{
	int local0;
	int local1;
	int i = 0;
	void *malloc0 = malloc(16);
	void *malloc1 = malloc(16);
	int arr0[4];
	int arr1[4];
#define CR(a,b)   assert(__builtin_may_alias((a),(b)) == __builtin_may_alias((b),(a)));
#define NOT(a,b)  CR(a,b); printf("%d should be 0: may_alias(%s, %s) = %d\n", i++, #a, #b, __builtin_may_alias((a), (b)))
#define MAY(a,b)  CR(a,b); printf("%d must not be 0: may_alias(%s, %s) = %d\n", i++, #a, #b, __builtin_may_alias((a), (b)))
	NOT(&glob0, &glob1);
	NOT(&local0, &local1);
	NOT(&param0, &param1);
	NOT(malloc0,  malloc1);

	NOT(&glob0, &local1);
	NOT(&glob0, &param1);
	NOT(&glob0, malloc1);
	NOT(&glob0, null);
	NOT(&local1, &param1);
	NOT(&local1, malloc1);
	NOT(&local1, null);
	NOT(&param1, malloc1);
	NOT(&param1, null);

	NOT(any0, any0+8);
	NOT(any0, any0-8);

	NOT(&arr0[val0], &arr1[val1]);

	MAY(malloc1, null);
	MAY(any0,    any0+val0);

	/* type based */
	NOT(any0, anyf0);

	/* flow based */
	if (any0 != any1)
		NOT(any0, any1);

	return 0;
}
