// should not warn about usage of undefined bla here
#if defined(bla) && bla > 5

#endif

int main(void)
{
	return 0;
}
