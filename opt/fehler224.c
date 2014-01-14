struct {
	int f0 : 1;
	char f1;
} a = { 1 };

int main() {
	a.f1 = a.f0;
	a.f0 = 0;

	return (int)a.f1 + 1;
}
