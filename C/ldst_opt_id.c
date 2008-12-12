struct X {
	int x;
} a;

static int* const arr[] = {
	&a.x
};

int* f(void)
{
	return arr[0];
}

int main(void)
{
	return 0;
}
