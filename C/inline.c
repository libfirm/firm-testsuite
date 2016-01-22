__attribute__((noinline)) int ret(void);

inline __attribute__((noinline)) int ret(void)
{
	return 0;
}

int main(void)
{
	return ret();
}
