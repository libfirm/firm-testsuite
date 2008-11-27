int x = 1;
int y = 33;
int g;

int main(void) {
	if ( (x << y) != (1 << 33) )
		return 1;

	g = 1 << 33;

	return 0;
}
