#include <stdio.h>

void test(int a, const char *b, int c)
{
	if (a != b[0] || a != c)
		fprintf(stderr, "test failed: %d %s %d\n", a, b, c);
}

int main(void)
{
	/* assume we have an ascii character set */
	test('\000', "\000", 0x0);
	test('\a', "\a", 0x07);
	test('\b', "\b", 0x08);
	test('\f', "\f", 0x0C);
	test('\n', "\n", 0x0A);
	test('\r', "\r", 0x0D);
	test('\t', "\t", 0x09);
	test('\v', "\v", 0x0B);
	test('\"', "\"", 0x22);
	test('\'', "\'", 0x27);
	test('\?', "\?", 0x3F);
	test('\\', "\\", 0x5C);
	test('\167', "\167", 0x77);
	test('\177', "\177", 0x7f);
	return 0;
}
