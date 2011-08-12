/* checks aggregate return calling convention by issuing a call to an extern
 * function */
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	div_t dt = div(1294, 42);
	printf("Res: %d %d\n", dt.quot, dt.rem);
	return 0;
}
