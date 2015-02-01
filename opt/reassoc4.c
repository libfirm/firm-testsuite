char a;

void f(int p)
{
	for (;;)
		a &= p & 10;
}

int main(void)
{
	return 0;
}
