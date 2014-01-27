int a = 1;

int main(void)
{
	unsigned char c = a - 1;

	if (c) {
		a = 0;
	}

	return a - 1;
}
