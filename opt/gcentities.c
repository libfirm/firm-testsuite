extern int puts(const char *str);

static void remove_not_1(void)
{
	puts("Hello ");
}

static void remove_not_2(void)
{
	puts("garbage collector");
}

static void __attribute__((used)) remove_not_3(void)
{
}

static void remove_1(void)
{
	puts(" world");
}

static void remove_2(void)
{
}

static void remove_3(void)
{
}

static void remove_5(void);

static void __attribute__((noinline)) remove_4(void)
{
	remove_5();
}

static void __attribute__((noinline)) remove_5(void)
{
	remove_4();
}

static void (*fptr)(void);
static void (*fptr2)(void) = remove_not_2;
static void (*fptr3)(void) = remove_3;
static int unused_var = 123;
int global_var1;
int global_var2 = 1;
extern int global_var3;

static void set(void)
{
	fptr = remove_not_1;
}

static void set2(void)
{
	fptr = remove_2;
	unused_var += 12;
	fptr3();
}

static void call(void)
{
	fptr();
}

int main(void)
{
	set();
	call();
	fptr2();
	return 0;
}
