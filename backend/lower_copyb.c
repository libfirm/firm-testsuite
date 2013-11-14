struct S0 {
	char f0;
} s, *p = &s;

int main(void) {
	struct S0 l[] = { 0, 0, 0, 1 };
	*p = l[3];
	return 1 - s.f0;
}
