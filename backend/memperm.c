/*
 * Check if backend does correctly handle MemPerms, especially
 * in omitfp functions.  SPARC backend choked on this.
 */

int z[22];

__attribute__((noinline)) void foo()
{
	int i;

	for (i = 0; i < 21; ++i) {
		int l1 = 1;
		int l2 = 2;
		int l3 = 3;
		int l4 = 4;
		int l5 = 5;
		int l6 = 6;
		int l7 = 7;
		int l8 = 8;
		int l9 = 9;
		int l10 = 10;
		int l11 = 11;
		int l12 = 12;
		int l13 = 13;
		int l14 = 14;
		int l15 = 15;
		int l16 = 16;
		int l17 = 17;
		int l18 = 18;
		int l19 = 19;
		int l20 = 20;
		int l21 = 21;
		int j;

		for (j = 0; j < i + 1; ++j) {
			z[1] = l1;
			z[2] = l2;
			z[3] = l3;
			z[4] = l4;
			z[5] = l5;
			z[6] = l6;
			z[7] = l7;
			z[8] = l8;
			z[9] = l9;
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

			int tmp = l1;
			l1 = l2;
			l2 = l3;
			l3 = l4;
			l4 = l5;
			l5 = l6;
			l6 = l7;
			l7 = l8;
			l8 = l9;
			l9 = l10;
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

		z[1] = l1;
		z[2] = l2;
		z[3] = l3;
		z[4] = l4;
		z[5] = l5;
		z[6] = l6;
		z[7] = l7;
		z[8] = l8;
		z[9] = l9;
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
}

int main()
{
	int i;

	foo();

	for (i = 1; i <= 21; ++i)
		if (z[i] != i)
			return 1;

	return 0;
}
