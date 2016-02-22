int a;

int main(void)
{
	char b = 1;
	while (a) {
		a = (b ? b : 1) ? (b /= a) > 0 : 0;
	}

	return 0;
}
