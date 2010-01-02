/*$ -fno-inline -fbool */
#include <stdio.h>

int test1(int x) {
	if (1 < x && x < 5)
		return 1;
	return 0;
}

int test2(int x, int y) {
	if (x || y)
		return 1;
	else
		return 0;
}

int test_p1(char *p, int *q) {
	if (!p && !q)
		return 1;
	return 0;
}

int test_p2(char *p, int *q) {
	if (p || q)
		return 1;
	return 0;
}

int main() {
	char c;
	int i;

	printf("%d %d\n", -1, test1(-1));
	printf("%d %d\n", 1, test1(1));
	printf("%d %d\n", 3, test1(3));
	printf("%d %d\n", 5, test1(5));

	printf("%d\n", test2(0, 5));

	printf("%d\n", test_p1(&c, &i));
	printf("%d\n", test_p1(NULL, NULL));
	printf("%d\n", test_p2(&c, &i));
	printf("%d\n", test_p2(NULL, NULL));

	return 0;
}
