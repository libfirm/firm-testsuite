struct X {
	int x:1 __attribute__((deprecated));
	int y : 2;
};

int main(void)
{
	struct X x;
	x.x = 0;
	return x.x;
}
