int *a;

int fn1(void)
{
	union {
		int i;
		float f;
	} u = { *a };

	return u.f;
}

int main(void)
{
	return 0;
}
