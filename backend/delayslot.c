unsigned x = 42;
unsigned y = 0;

unsigned volatile pointer = 0;

unsigned volatile *__attribute__((noinline))get_pointer(void)
{
	return &pointer;
}

int main(void)
{
	unsigned volatile *dump = get_pointer();

	unsigned lx = x;

	unsigned l00 = *dump;
	unsigned l01 = *dump;
	unsigned l02 = *dump;
	unsigned l03 = *dump;
	unsigned l04 = *dump;
	unsigned l05 = *dump;
	unsigned l06 = *dump;
	unsigned l07 = *dump;
	unsigned l08 = *dump;
	unsigned l09 = *dump;
	unsigned l10 = *dump;
	unsigned l11 = *dump;
	unsigned l12 = *dump;
	unsigned l13 = *dump;
	unsigned l14 = *dump;
	unsigned l15 = *dump;
	unsigned l16 = *dump;
	unsigned l17 = *dump;
	unsigned l18 = *dump;
	unsigned l19 = *dump;
	unsigned l20 = *dump;
	unsigned l21 = *dump;
	*dump = l00;
	*dump = l01;
	*dump = l02;
	*dump = l03;
	*dump = l04;
	*dump = l05;
	*dump = l06;
	*dump = l07;
	*dump = l08;
	*dump = l09;
	*dump = l10;
	*dump = l11;
	*dump = l12;
	*dump = l13;
	*dump = l14;
	*dump = l15;
	*dump = l16;
	*dump = l17;
	*dump = l18;
	*dump = l19;
	*dump = l20;
	*dump = l21;

	unsigned ly = y;

	if (!ly) {
		return lx ^ 42;
	} else {

		unsigned ll00 = *dump;
		unsigned ll01 = *dump;
		unsigned ll02 = *dump;
		unsigned ll03 = *dump;
		unsigned ll04 = *dump;
		unsigned ll05 = *dump;
		unsigned ll06 = *dump;
		unsigned ll07 = *dump;
		unsigned ll08 = *dump;
		unsigned ll09 = *dump;
		unsigned ll10 = *dump;
		unsigned ll11 = *dump;
		unsigned ll12 = *dump;
		unsigned ll13 = *dump;
		unsigned ll14 = *dump;
		unsigned ll15 = *dump;
		unsigned ll16 = *dump;
		unsigned ll17 = *dump;
		unsigned ll18 = *dump;
		unsigned ll19 = *dump;
		unsigned ll20 = *dump;
		unsigned ll21 = *dump;

		*dump = ll00;
		*dump = ll01;
		*dump = ll02;
		*dump = ll03;
		*dump = ll04;
		*dump = ll05;
		*dump = ll06;
		*dump = ll07;
		*dump = ll08;
		*dump = ll09;
		*dump = ll10;
		*dump = ll11;
		*dump = ll12;
		*dump = ll13;
		*dump = ll14;
		*dump = ll15;
		*dump = ll16;
		*dump = ll17;
		*dump = ll18;
		*dump = ll19;
		*dump = ll20;
		*dump = ll21;

		*dump = ly;
	}

	return 0;
}
