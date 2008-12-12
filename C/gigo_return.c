int g;

int f(int x)
{
	return 0;
	if (g) {
		g = 23;
	} else {
		g = 42;
	}
	/* This return gets gigo'ed on creation, because its value is Bad.  So the
	 * block ends up with only a kept PhiM (due to the assignments to 'g' above)
	 * and nothing else.  It is also not kept, because there is no loop.  Its
	 * dominance depth is never set to -1, because it cannot be reached by a block
	 * walk or by kept blocks.  So CFopt never properly processes the block and
	 * its Bad CF predecessors remain, which makes the Bad-verifier after CFopt
	 * unhappy. */
	return x;
}

int main(int argc, char *argv[]) {
	return f(3);
}
