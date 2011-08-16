#include <stdio.h>

int main(void)
{
	unsigned short x;
#define M(e) printf("%s: %s\n", #e, sizeof(e) == sizeof(int) ? "good" : "bad")
	M(+x);
	M(-x);
	M(~x);
	M(x*x);
	M(x/x);
	M(x%x);
	M(x+x);
	M(x-x);
	M(x<<x);
	M(x>>x);
	M(x&x);
	M(x^x);
	M(x|x);
	return 0;
}
