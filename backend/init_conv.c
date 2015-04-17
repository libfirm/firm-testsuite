static int i = 42;
/* This causes a conversion node in an initializer. */
static unsigned long p = (unsigned long)&i;

int main(void)
{
	return *(int*)p ^ 42;
}
