int a;

int fn1(void)
{
restart:
	for (;;) {
		for (a = 0; a == 0;) {
			for (;;) {
				goto restart;
			}
		}
	}
}

int main(void)
{
	return 0;
}
