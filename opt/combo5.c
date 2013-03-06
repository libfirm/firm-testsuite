int condition1 = 0;
int condition2 = 0;
int condition3 = 0;

int f(void)
{
	unsigned a = 0;
	unsigned b = 0;

	switch (condition1) {
	case 0:
		if (!condition2) {
			a++;
		}
	}

	int c = condition3 ? 0 : 42;

	if (c) {
		a++;
	} else {
		b++;
	}

	if (a + b)
		return a + b;

	return 0;
}

int main(void)
{
	return 0;
}
