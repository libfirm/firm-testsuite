/*$ -fno-if-conversion $*/
#include<stdio.h>

int main(void)
{
	int res = 0;
	long long solution = 42;

	for (int i = 1; i < 42; i++) {
		int out = solution/i;

		if (i == 7) {
			res = 42;
		}
		else {
			res = 0;
		}

		printf("%d\n", out);
	}

	return res;
}
