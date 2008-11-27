
int foobar(const char *s) asm("puts");

int main(void)
{
	foobar("all ok");
	return 0;
}
