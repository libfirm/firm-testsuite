int a;
unsigned b;

void fn1(int p1)
{
	if ((a ? 0 : b) & (b /= a)) {
		a;
	}
	a = p1;
}

int main(void)
{
	return 0;
}
