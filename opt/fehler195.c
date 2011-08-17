/*
 * Generator: csmith 2.0.0
 * svn version: exportiert
 * Options:   --max-funcs 1 --max-struct-fields 2 --max-block-size 1 --bitfields --max-array-len-per-dim 3 --paranoid -o found/test005295.c
 * Seed:      2590414432
 */

#include <stdio.h>

static unsigned
(safe_add_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{

  return ui1 + ui2;
}

int g_16 = 0x1BC6L;

void func_1(void)
{
	int x = (0 != g_16);
	unsigned int y = safe_add_func_uint32_t_u_u(0, 2);
	if (x & y)
	{
		g_16 = -1;
	}
}

int main (void)
{
	func_1();
	printf("%d\n", g_16);
	return 0;
}
