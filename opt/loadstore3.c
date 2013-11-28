struct S {
	int f;
} a = { 1 }, *b = &a;

int main(void) {
	a.f = 0;
	a   = *b;

	return a.f;
}
