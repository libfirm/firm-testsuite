int l = 10;
void *v;

int main(int argc, char **argv)
{
	if (__builtin_expect(argc > 1, 0)) {
		return 1;
	}
	/* strange but apparently legal... */
	if (__builtin_expect(argc < -10, l)) {
		return 42;
	}
	/* even stranger and apparently still legal... */
	v = __builtin_expect;

	return 0;
}
