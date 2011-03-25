#include <stdio.h>

short save_regs[31];
int nregs = 2;
int nxregs = 1;
int ran;
int current_function_outgoing_args_size;

int __attribute__((noinline)) foo(void)
{
	int sp_size = ran;
	nregs += save_regs[1] + save_regs[30];
	/* firm mistakenly matched the a!=0 && b!=0 => (a|b)!=0 rule here... */
	if (nxregs > 0 && (nregs&1) != 0)
		sp_size += 4;
	sp_size += 4*nregs;
	sp_size += 4*nxregs;
	sp_size += current_function_outgoing_args_size;
	return sp_size;
}

int main(void)
{
	printf("Res: %d\n", foo());
	return 0;
}
