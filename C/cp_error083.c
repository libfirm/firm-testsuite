struct S1 {
	int *f1;
} fn2(int p1) {
	return (struct S1){&p1};
}

int main(void)
{
	return 0;
}
