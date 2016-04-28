static enum {
	A,
	B,
} e;

int main(void)
{
	int a;

	switch (e) {
	case A: a = 0; break;
	case B: a = 1; break;
	}

	return a;
}
