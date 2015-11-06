volatile int a;

int main(void)
{
	for (int f = 1; f < 3; f++) {
		f || a;
	}

	for (a = 1; a; a = 0) {
	}

	return 0;
}
