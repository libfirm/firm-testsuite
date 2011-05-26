
int main(void)
{
	typedef int foot;
	foot foo = 42;

	int __attribute__((noinline)) k(void) {
		return foo;
	}

	return k() != 42;
}
