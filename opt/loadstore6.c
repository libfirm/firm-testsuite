struct S {
	int f;
} a;

int main(void)
{
	struct S b = a;
	a.f = 1;

	return b.f;
}
