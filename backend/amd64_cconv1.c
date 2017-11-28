#include <stdio.h>

struct s {
	int a;
	double b;
};


void f(struct s s) {
	printf("%d %f\n", s.a, s.b);
}


int main() {
	f((struct s){42, 3.15});
	return 0;
}
