#include <stdio.h>

static unsigned char uc;
static signed char   sc;
static unsigned short us;
static signed short   ss;

const char x;

static unsigned char usa[100];

void test(void) {
	scanf("%hhu %hhd", &uc, &sc);
	scanf("%hu %hd", &us, &ss);
	scanf("%s", usa);
	scanf("%s", &x);
}

int main(void) {
	return 0;
}
