
int main(void)
{
	typedef int foot;
	foot foo;

	int k(void) {
		return foo;
	}

	return k();
}
