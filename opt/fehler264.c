int a;
int b;

unsigned fn1(int p1)
{
	return a || p1 > 0 ? p1 : 0;
}

void fn2(void)
{
	for (a = 0; a >= 0; a--) {
		int *j;
		*j = 18446744073709551607UL >= b;
		b = fn1(*j) & a;
	}
}

int main(void)
{
	return 0;
}
