#include <stdio.h>

int add(int i, int j, int k, int l)
{
	return i + j + k +l;
}

int hallo()
{
	int i = 0;
	int j = 2;

	i = add(i, j, i, j);

	return i;
}

int main() {
	printf("%d\n", hallo());
	return 0;
}
