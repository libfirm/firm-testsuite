int main(void) {
	int x = 3;
	(void)--x;
	(void const)x--;
	(void volatile)(x -= 1);
	return x;
}
