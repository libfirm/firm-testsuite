enum e {
	a, b, c
};

static enum e E;

int main(int argc, char *argv[]) {
	(void)argc, (void)argv;
	switch (E) {
	case a: return 1;
	}
	return 0;
}
