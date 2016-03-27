#include <stdio.h>

int main(void)
{
	/* 3 errors + 9 warnings because of an invalid label name
	 * (mostly statment is unreachable) */
	goto 44;
44:
	printf("foo\n");
	int more_code = 0;
	while (more_code) {
	}
	return 0;
}
