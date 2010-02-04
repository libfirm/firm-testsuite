extern int puts(const char *str);

static void i_should_not_be_removed(void)
{
	puts("Hello");
}

static void i_should_be_removed(void)
{
	puts(" world");
}

static void unused_func(void)
{
}

static void (*fptr)(void);
static int unused_var = 123;
int global_var1;
int global_var2 = 1;
extern int global_var3;

static void set(void)
{
	fptr = i_should_not_be_removed;
}

static void set2(void)
{
	fptr = i_should_be_removed;
	unused_var += 12;
}

static void call(void)
{
	fptr();
}

int main(void)
{
	set();
	call();
	return 0;
}
