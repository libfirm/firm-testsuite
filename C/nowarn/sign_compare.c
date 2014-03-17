static unsigned u;
static int x;
static int flag;
static int y;
static long long ll;

enum E {
	A, B, C=-1
};
enum E2 {
	A2, B2, C2
};

static enum E2 e2;

static void nop(void) { }

int main(void)
{
	unsigned char mask = 0xFF;
	unsigned char val  = 0;
	(void) ((val & mask) != mask);

	(void) (u < 10);
	(void) (u < A);
	(void) (u < e2);
	(void) (u < (x = 10));
	(void) (u < (nop(), 10));
	(void) (u < ({ nop(); 10; }));
	(void) (u < (x = ({ nop(); 10; }) ));
	(void) (u < (x == y));
	(void) (u < (flag ? x==y : 10));
	(void) (u > ll);

	return 0;
}
