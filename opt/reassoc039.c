int a;
int b;

int fn1(int p1)
{
	return p1 == 0 ? 0 : p1;
}

int main(void)
{
	int c = fn1(a != 0);
	int d = c / 2;
	int e = b ^ d != 0;
	return e & 1;
}
