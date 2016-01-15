struct S1 {
	int *f1;
} a;

struct S1 fn1(int p1, int p2, int p3, int p4, int p5, int p6)
{
	a.f1 = &p6;
	return a;
}

int main(void)
{
	return 0;
}
