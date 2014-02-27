struct {
	int f1 : 1;
} a;

int b;

int main(void)
{
	if (b <= 0) {
		a.f1 |= 0;
	} else if (b <= 0 == 7) {
		b = a.f1;
	}

	return a.f1;
}
