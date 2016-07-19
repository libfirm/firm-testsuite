volatile char a;
int b;

void fn1(void)
{
	--a;
}

int main(void)
{
	fn1();

	return b = 0;
}
