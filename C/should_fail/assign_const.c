struct A {
	int const x;
};

struct B {
	struct A a;
} b0, b1;

int main(void)
{
	b0 = b1;
}
