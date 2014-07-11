signed char a = -7L;
unsigned b;
int c;
int main() {
	c = (b = 0) < a;
	return c - 1;
}
