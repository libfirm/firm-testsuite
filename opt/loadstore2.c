static int a[41];
int b;
int *c = &a[40];
int *d = &b;

int main() {
	int e = a[40];
	*d = e |= 0;
	*c = 1;
	e = a[40];
	*d = e |= 0;

	return 1 - b;
}
