int a;
struct S2 {
	int f0;
} b;

int __attribute__((noinline)) fn1(struct S2 p2)
{
	while (a) {
	}
	return p2.f0;
}

int main(void)
{
	return fn1(b);
}
