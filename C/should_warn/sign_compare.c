enum E {
	A, B, C=-1
};

static int i;
static char c;
static short s;
static long long ll;
static unsigned long long ull;
static unsigned u;

int main(void)
{
	(void) (u < C);
	(void) (c < u);
	(void) (s < u);
	(void) (i < u);
	(void) (c < ull);
	(void) (s < ull);
	(void) (i < ull);
	(void) (ll < ull);
}
