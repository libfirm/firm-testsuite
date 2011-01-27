struct bla {
	int val;
};

static void test(struct bla new, struct bla old, struct bla blubb)
{
	((old.val != 0) ? (void) (new.val = (((old.val != 0) ? (void) 0 : blubb), old.val)) : (void) 0);
}

int main(void) {
	return 0;
}
