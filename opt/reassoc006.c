int a;

void fn1(int p1)
{
	for (;;)
		a = p1 & 1 | a | p1;
}

int main(void)
{
	return 0;
}
