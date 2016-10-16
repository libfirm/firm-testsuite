#include <stdio.h>

static unsigned char uc;
static signed char   sc;
static unsigned short us;
static signed short   ss;

static const char x;

static unsigned char usa[100];

static void test(void)
{
	scanf("%hhu %hhd", &uc, &sc);
	scanf("%hu %hd", &us, &ss);
	scanf("%s", usa);
	scanf("%s", &x);
}

int main(void)
{
	(void)test;
	return 0;
}
