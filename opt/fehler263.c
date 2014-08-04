unsigned a;
int b;
int c;

int main(void)
{
	int d = a;
	b = 1;
	c = 0 >= a < d;

	if (b)
		;
	else
		for (;;);

	return 0;
}
