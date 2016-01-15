struct {
	void (*f)(int *);
} *a;

int main(void)
{
	if (a) {
		a->f(a);
	}

	return 0;
}
