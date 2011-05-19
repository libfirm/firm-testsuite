#ifdef __APPLE__
#	define MANGLE "_"
#else
#	define MANGLE ""
#endif

int foobar(const char *s) asm(MANGLE "puts");

int main(void)
{
	foobar("all ok");
	return 0;
}
