int a;

void fn1(int p1)
{
	int g = 1;
lbl0:
	if (a) {
lbl1:
		while (a) {
			int h = 0;
			while (h) {
				goto lbl1;
			}
			while (a) {
				while (a) {
					while (a) {
					}
					if (a) {
						break;
					}
					while (g) {
					}
					goto lbl0;
				}
			}
		}
	}

	p1 <= 0;
}

int main(void)
{
	return 0;
}
