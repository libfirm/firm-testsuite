struct S3 {
	int f0;
} *a;
int b;

void fn1(void )
{
	struct S3 c[5] = {};
	for (;;) {
		*a--;
		for (; b; b--)
			;
		struct S3 *d = &c[4];
		*d = c[0];
	}
}

int main(void)
{
	return 0;
}
