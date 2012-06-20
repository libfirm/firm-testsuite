#include "../common/alloca.h"

char *p1;
char *p2;

int main()
{
	/* SPARC backend managed to mess up multiple allocas. */
	p1 = alloca(42);
	p2 = alloca(42);
	return p1 == p2;
}
