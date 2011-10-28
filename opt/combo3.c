int f() { return 0; }

int main(void)
{
	int i = 0;
	for (; i < 1; i++) {
		if (f()) {
			if (i) continue;
		} else {
			if (i) {
				if (i) f();
			} else {
				for (; i < 1; i++) { }
			}
			if (i) {
				for (; i < 1; i++) { }
			}
		}
	}
	return 0;
}
