/*$ -fno-omit-frame-pointer $*/

int g;
int h;

int main(void)
{
	int y;
	int delta;
	/* Check whether y is allocated below the stack. */
	asm("leal %1, %0; subl %%esp, %0" : "=r" (delta) : "m" (y) : "cc");
	/* Try to enforce multiple blocks with ret. */
	if (delta < 0) {
		g = 23;
		return 1;
	} else {
		h = 42;
		return 0;
	}
}
