struct S0 {
	int f0;
};

static char         array1[2] = {0, 0};
static int          array2[2] = {0, 0};
static volatile int global1   = 0;
static int          global2   = 0;
static int          global3   = 0;

static short add(int a, int b)
{
	return a + b;
}

static unsigned char mul(int a, int b)
{
	return a * b;
}

static long long sub(long long a, long long b)
{
	return a - b;
}

static char f(char a, struct S0 b, char c)
{
	(void) a;
	(void) b;

	return c;
}

int main(void)
{
	struct S0 local1    = {0};
	int       local2[1] = {1};
	int       local3[1] = {global3};

	array2[0] = ((f((!(sub((mul((add((((global3 = (array1[0] > (local2[0] && array1[0]))), array1[1]) , global1), array1[global2])), 0x0BL)), global2))), local1, array1[1]) != array1[0]) < array1[1]) >= array1[1];

	return 0;
}
