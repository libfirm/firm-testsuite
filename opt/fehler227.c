int a;
int b;
int c;
int d;
int e;

void fn1(void)
{
	int *f = 0;

	for (;;) {
		c = *f = 1;
		e = 0 >= *f;
		if (!a)
			break;
		d = ~(1 && b) >= 0;
	}
}

int main(void)
{
	return 0;
}
