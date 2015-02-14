int a;
char b[2][2];

void fn1(void)
{
	for (;;)
		b[a][a + 1];
}

int main(void)
{
	return 0;
}
