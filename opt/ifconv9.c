int a;

static int fn1(long long p1)
{
	return p1 == -1 ? 0 : -p1;
}

int main() {
	signed char b = -128;
	int         c = fn1(a > b);
	int         d = c == 1U;

	return d;
}
