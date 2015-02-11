int a;

int main(void)
{
	for (int b = 0; b != 11; b++) {
		b && a++;
		a = b != 1;
		if (b)
			break;
	}

	return 0;
}
