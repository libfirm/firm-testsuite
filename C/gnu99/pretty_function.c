extern int puts(const char *str);

static const char *otherfunc(void)
{
	return __PRETTY_FUNCTION__;
}

int main(void)
{
	const char *str = __FUNCTION__;
	puts(str);
	str = otherfunc();
	puts(str);
	return 0;
}
