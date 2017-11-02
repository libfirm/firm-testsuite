/*$ -O0 $*/
/*$ check shrq\s+ $*/
typedef struct {
	char a, b, c;
} size1;

size1 a() {
	return (size1){42};
}

int main(void) {
	a();
	return 0;
}
