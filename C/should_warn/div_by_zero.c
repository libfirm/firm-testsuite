static float NaN = 0.0/0.0;

int main(int argc, char *argv[]) {
	(void)argv, (void)NaN;
	return argc / 0;
}
