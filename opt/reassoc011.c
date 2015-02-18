int a;
int b;

void fn1(int p1)
{
	for (;;) {
		b = 1 & p1 & a & p1;
	}
}

int main(void)
{
	return 0;
}
