/* a good compiler should only produce a single Cmp instruction for each of
 * these functions and no Cmp at all for muxcmp2, muxcmp3 */

extern int puts(const char *str);

static void __attribute__((noinline)) muxcmp(int x)
{
	int flag = x == 2;
	if (flag)
		puts("x is 2");
}

static void __attribute__((noinline)) muxcmp0(int x)
{
	int bla = x < 5 ? 42 : 13;
	if (bla == 42)
		puts("choice0");
	else
		puts("choice1");
}

static void __attribute__((noinline)) muxcmp1(int x)
{
	int bla = x < 5 ? 42 : 13;
	if (bla == 13)
		puts("choice2");
	else
		puts("choice3");
}

static void __attribute__((noinline)) muxcmp2(int x)
{
	int bla = x < 5 ? 42 : 13;
	if (bla < 100)
		puts("choice4");
	else
		puts("choice5");
}

static void __attribute__((noinline)) muxcmp3(int x)
{
	int bla = x < 5 ? 42 : 13;
	if (bla > 100)
		puts("choice6");
	else
		puts("choice7");
}

int main(void)
{
	muxcmp(0);
	muxcmp(2);
	muxcmp0(1);
	muxcmp0(5);
	muxcmp1(1);
	muxcmp1(5);
	muxcmp2(1);
	muxcmp2(5);
	muxcmp3(1);
	muxcmp3(5);
	return 0;
}
