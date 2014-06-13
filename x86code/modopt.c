/* All the modulo operations here should be optimized away */
/*$ !check div $*/
unsigned mod0(unsigned x)
{
	return x % 1;
}

int mod1(int x)
{
	return x % -1;
}

unsigned mod2(unsigned x)
{
	if (x == 0)
		return 0;
	return x % x;
}

unsigned mod3(unsigned y)
{
	if (y == 0)
		return 0;
	return 0 % y;
}

int mod4(void)
{
	return 42 % -10;
}

unsigned mod5(unsigned x, unsigned y)
{
	if (y == 0) return x;
	return (x/y)*y + x%y;
}

unsigned mod6(unsigned x)
{
	x |= 0xFFFFFFFE;
	x &= 0x000000F5;
	return x % 9;
}

int main(void)
{
	return 0;
}
