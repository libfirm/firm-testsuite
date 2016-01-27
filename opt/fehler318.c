int a;
int *b = &a;

void fn1(void)
{
	short e = 1;
	for (a = -1; a <= 1;) {
		if ((e &= a) > a) {
			a = e *= 3;
		}
		a = *b <= (e > 0);
	}
}

int main(void)
{
	return 0;
}
