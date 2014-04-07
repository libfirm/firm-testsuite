static void default_foo_implementation(void)
{
}

extern __typeof(default_foo_implementation) foo_alias __attribute__((weak, alias("default_foo_implementation")));

int main(void)
{
	foo_alias();
	return 0;
}
