char c;

short fn1(short p1, int p2)
{
	return p2 ? 0 : p1 << 1;
}

int main(void)
{
	int a = 0 || fn1(c <= 0, 0);

	return a - 1;
}
