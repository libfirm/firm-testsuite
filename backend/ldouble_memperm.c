#include <assert.h>
extern int printf(const char *str, ...);

typedef long double t;

t z[22];

__attribute__((noinline)) void foo(int n)
{
	t l0  = z[0];
	t l1  = z[1];
	t l2  = z[2];
	t l3  = z[3];
	t l4  = z[4];
	t l5  = z[5];
	t l6  = z[6];
	t l7  = z[7];
	t l8  = z[8];
	t l9  = z[9];
	t l10 = z[10];
	t l11 = z[11];
	t l12 = z[12];
	t l13 = z[13];
	t l14 = z[14];
	t l15 = z[15];
	t l16 = z[16];
	t l17 = z[17];
	t l18 = z[18];
	t l19 = z[19];
	t l20 = z[20];
	t l21 = z[21];

	for (int i = 0; i < n; ++i) {
		t tmp = l0;
		l0  = l1;
		l1  = l2;
		l2  = l3;
		l3  = l4;
		l4  = l5;
		l5  = l6;
		l6  = l7;
		l7  = l8;
		l8  = l9;
		l9  = l10;
		l10 = l11;
		l11 = l12;
		l12 = l13;
		l13 = l14;
		l14 = l15;
		l15 = l16;
		l16 = l17;
		l17 = l18;
		l18 = l19;
		l19 = l20;
		l20 = l21;
		l21 = tmp;
	}

	z[0]  = l0;
	z[1]  = l1;
	z[2]  = l2;
	z[3]  = l3;
	z[4]  = l4;
	z[5]  = l5;
	z[6]  = l6;
	z[7]  = l7;
	z[8]  = l8;
	z[9]  = l9;
	z[10] = l10;
	z[11] = l11;
	z[12] = l12;
	z[13] = l13;
	z[14] = l14;
	z[15] = l15;
	z[16] = l16;
	z[17] = l17;
	z[18] = l18;
	z[19] = l19;
	z[20] = l20;
	z[21] = l21;
}

int main()
{
	for (int i = 0; i < 22; ++i) {
		z[i] = i;
	}

	foo(22);

	for (int i = 0; i < 22; ++i) {
		printf("%Lf\n", z[i]);
		assert(z[i] == (t)i);
	}

	return 0;
}
