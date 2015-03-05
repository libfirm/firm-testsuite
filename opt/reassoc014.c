int a;
int b;
int c;

int main(void)
{
	if (b) {
		a &= c;
		a &= c | b;
	}

	return 0;
}
