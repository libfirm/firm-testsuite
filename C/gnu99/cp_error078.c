static void default_foo_implementation(void)
{
}

#ifdef __ELF__
extern __typeof(default_foo_implementation) foo_alias __attribute__((weak, alias("default_foo_implementation")));
#else
#define foo_alias default_foo_implementation
#endif

int main(void)
{
	foo_alias();
	return 0;
}
