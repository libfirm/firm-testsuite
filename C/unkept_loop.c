int main(void)
{
	for (;;) {
		int x = rand() ? 23 : 42;
		if (x == 19)
			break;
	}
	return 0;
}
