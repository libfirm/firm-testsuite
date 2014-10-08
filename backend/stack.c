int g;
struct s0 {
	short f0;
};

struct s0 fn1(void)
{
	for (;;) {
		int s[800] = { g };
	}
}

void fn2(void)
{
	fn1();
	for (;;) {
	}
}

int main(void)
{
	return 0;
}
