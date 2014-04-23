int a;

int main(void)
{
	int b[2];
	b[0] = 0;
	b[1] = 1;

	int c = 0;
	for (; a < 1; a++) {
		c = b[0];
	}

	return c;
}
