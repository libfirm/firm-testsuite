int a;

void fn1(void)
{
	for (;;) {
		char b = a >= 0;
		a = 1 - (b | a & 10);
	}
}

int main(void)
{
	return 0;
}
