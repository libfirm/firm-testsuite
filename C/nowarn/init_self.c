/* this appears like a self-initialisation but is none */
static void *MARK = &MARK;

int main(void) {
	void *MARK2 = &MARK2;
	(void) MARK;
	(void) MARK2;
	return 0;
}
