/*$ -O0 $*/
/*$ check call c $*/
/*$ !check movq\s+%rax,\s*-\d+\(%rbp\) $*/

typedef struct {
	unsigned a;
} b;

b c(void) {
	return (b){42};
}

void d(void) {
	c();
}

int main(void) {
	d();
	return 0;
}
