#include<stdio.h>

int main(void)
{
	int res = 0;
	long long solution = 42000000000;

	for (int i = 20; i < 42; i++) {
		int out = solution/i;

		if (i == 23) {
			res = 42;
		}
		else {
			res = 0;
		}

		printf("%d\n", out);
	}

	return res;
}
