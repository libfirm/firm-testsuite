int a;
short b;

int main(void)
{
	b = !b;
	while (a) {
		a = !b;
	}

	return 0;
}
