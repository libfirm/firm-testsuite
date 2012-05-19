/*$ -Wtraditional $*/

static int t1(int a) { return a; }
static int t2(double a) { return a; }
static int t3(char a) { return a; }

static int x() {
	int i = +3;
	(void)i;
	return t1(0.0) + t2(0) + t3('a');
}

static int sw1(long x) {
	switch(x) {
	default: return x;
	}
}

static int sw2(unsigned x) {
	switch(x) {
	default: return x;
	}
}

static char *str() {
	return "a" "b";
}

int suff(void);

int suff() {
	unsigned a = 1U;
	float f = 1.0F;
	double d = 1.0L;
	unsigned long long bla = 1ULL;
	(void)f, (void)d, (void)bla;
	return (int) a;
}

int main(void)
{
	(void)x, (void)sw1, (void)sw2, (void)str;
	return 0;
}
