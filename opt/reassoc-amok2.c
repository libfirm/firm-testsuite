unsigned a;
unsigned b;

#define ROL(x,y) (((x) << (y)) + ((x) >> ((8 * sizeof(unsigned)) - (y))))

int main(void)
{
	unsigned l00 = a;
	unsigned l01 = b;
	unsigned l02 = ROL(l00 + l01, 1);
	unsigned l03 = ROL(l01 + l02, 2);
	unsigned l04 = ROL(l02 + l03, 1);
	unsigned l05 = ROL(l03 + l04, 2);
	unsigned l06 = ROL(l04 + l05, 1);
	unsigned l07 = ROL(l05 + l06, 2);
	unsigned l08 = ROL(l06 + l07, 1);
	unsigned l09 = ROL(l07 + l08, 2);

	unsigned l10 = ROL(l08 + l09, 1);
	unsigned l11 = ROL(l09 + l10, 2);
	unsigned l12 = ROL(l10 + l11, 1);
	unsigned l13 = ROL(l11 + l12, 2);
	unsigned l14 = ROL(l12 + l13, 1);
	unsigned l15 = ROL(l13 + l14, 2);
	unsigned l16 = ROL(l14 + l15, 1);
	unsigned l17 = ROL(l15 + l16, 2);
	unsigned l18 = ROL(l16 + l17, 1);
	unsigned l19 = ROL(l17 + l18, 2);

	unsigned l20 = ROL(l18 + l19, 1);
	unsigned l21 = ROL(l19 + l20, 2);
	unsigned l22 = ROL(l20 + l21, 1);
	unsigned l23 = ROL(l21 + l22, 2);
	unsigned l24 = ROL(l22 + l23, 1);
	unsigned l25 = ROL(l23 + l24, 2);
	unsigned l26 = ROL(l24 + l25, 1);
	unsigned l27 = ROL(l25 + l26, 2);
	unsigned l28 = ROL(l26 + l27, 1);
	unsigned l29 = ROL(l27 + l28, 2);

	return (int)l29;
}
