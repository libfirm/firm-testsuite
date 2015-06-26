int a;
int b;

void f(void)
{
	for (;;) {
		a ^= (a & b) & 1;
	}
}

int main(void)
{
	return 0;
}
