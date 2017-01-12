volatile char a;
static char *b = &a;
int c;

void fn1(void)
{
	for (;c; c--) {
		*b = a | 1;
	}
}

int main(void)
{
	fn1();
	return 0;
}
