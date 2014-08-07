int a;

void fn1(int p1, int p2)
{
	if (p2) {
		for (; p1 < 1; p1++) {
			;
		}
	}
}

int main(void)
{
	fn1(0, a);
	fn1(0, a);

	return 0;
}
