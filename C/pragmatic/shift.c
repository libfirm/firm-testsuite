static int get_x(void) {
	return 1;
}

static int get_y(void) {
	return 33;
}

int main(int argc, char *argv[]) {
	int x = get_x();
	int y = get_y();
	printf("%d << %d = %d\n", x, y, x << y);
	return 0;
}
