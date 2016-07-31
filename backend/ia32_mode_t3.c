char a;
int b;

void fn1(void)
{
	a = *(char volatile*)&a - 1;
}

int main(void)
{
	fn1();

	return b = 0;
}
