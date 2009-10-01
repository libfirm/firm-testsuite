/* A long function/basic block. Esp. problematic for arm, where we can't
   address all globals PC relative here */

extern int printf(const char *str, ...);

#define THREE(X) X X X
#define TWENTY(X) X X X X X X X X X X X X X X X X X X X X

int main(int x)
{
	x += printf("Hello: %d\n", x);

	THREE(
	TWENTY(
	TWENTY(x *= 2;
	x += 3;
	x /= 2;)
	)
	)

	printf("HelloRes: %d\n", x);
}
