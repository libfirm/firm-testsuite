int a[8][4];
int b;
int c;

void fn1(void)
{
	for (b = 0; b < 8; b++) {
		for (c = 0; c < 4; c++) {
			a[b][c] = 0;
		}
	}
}

int main(void)
{
	fn1();
	return 0;
}
