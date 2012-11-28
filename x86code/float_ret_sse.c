/*$ -bia32-arch=core2 -bia32-opt=core2 -bia32-fpunit=sse2 $*/

/* test SSE to x87 transfer */
#include <stdio.h>

double func(double x, double y) {
	return x + y + 1.0;
}

double a = 1.0;
double b = -1.0;

int main(int argc, char *argv[]) {
	printf("%f\n", func(a, b));
	return 0;
}
