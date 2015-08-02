/*$ -O1 $*/

/* cparser -O1 -c thisfile.c
 * --> Block BB[136:10](func_3): verify warning: register eax assigned more than once (nodes Proj Iu[629:154] and Proj Iu[494:30])
 * Block BB[136:10](func_3): verify warning: Proj Iu[494:30] not registered as value for register eax (but (null))
 * error: verifier failed; trying to write assert graph and abort
 * Abort trap (core dumped)
 *
 * no error with -O0 , -O2 , -O3 , -O4 , -Os
 * cparser '20150802' == cparser 0.9.14(a00b7515363bfd85bdd1ec6383edb4896836523c) using libFirm 1.21(5ddb39dbdbe3c75113856ed0252120c31595e68d)
 *
 * OpenBSD 5.7 32 bit, Intel core i5 */

struct S {
	int f;
};

int g_a = 0;
int *volatile g_b = &g_a;

static int func_1(int a, int b) { return 1234; }

static int func_2(struct S p) { return 0; }

int main(void)
{
	int l_x[1];
	struct S s = { 0 };

	for (int i = 0; i < 1; i++)
		l_x[i] = 1L;

	int l_y = 0;
	int *l_z[1] = { &l_y };
	l_x[0] &= func_1(1, 2);
	*g_b = func_2(s);

	return 0;
}
