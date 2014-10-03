struct foobar {
	int a;
	int b;
	int c;
};

static int g0;
static int g1;
static int g2;
static int g3[10];
static int g4[10];
static struct foobar g5;
static struct foobar g6;
static struct foobar g7;

/* some ways how addresses can escape */
int *p = &g0;
struct {
	struct {
		int *p;
		int c;
	} sub;
	int d;
} str = { &g1, 1, 2 };

int *get_g2(void)
{
	return &g2;
}

int *get_g3(void)
{
	return &g3[4];
}

int *get_g4(int i)
{
	return &g4[i];
}

int *get_g5_part(void)
{
	return &g5.b;
}

struct foobar *get_g6(void)
{
	return &g6;
}

void (*do_something2)(struct foobar *f);

void do_g7(void)
{
	do_something2(&g7);
}

/* the following vars should not count as escaped */
static int n0;
static int n1;
static int n2;
static struct foobar n3;
static struct foobar n4;
static int n5[10];
static struct foobar n6;

void set_n1(int val)
{
	n1 = val;
}

int get_n2(void)
{
	return n2;
}

void set_n3(struct foobar f)
{
	n3 = f;
}

void copy_n4(void)
{
	n3 = n4;
}

int get_n5(int i)
{
	return n5[i];
}

int get_n5_4(void)
{
	return n5[4];
}

void set_n5(int i, int val)
{
	n5[i] = val;
}

void set_n5_4(int val)
{
	n5[4] = val;
}

void (*do_something)(struct foobar f);
struct foobar (*get_something)(void);

void do_n6(void)
{
	do_something(n6);
	n6 = get_something();
}

/* check escaped state by looking at the alias relations */
char *ptr;

int main(void)
{
#define CHECK_ESCAPED(p)      printf("escaped %s: %d (must not be 0)\n", #p, __builtin_may_alias(ptr, (p)));
	CHECK_ESCAPED(&g0);
	CHECK_ESCAPED(&g1);
	CHECK_ESCAPED(&g2);
	CHECK_ESCAPED(&g3);
	CHECK_ESCAPED(&g4);
	CHECK_ESCAPED(&g5);
	CHECK_ESCAPED(&g6);
	CHECK_ESCAPED(&g7);

#define CHECK_NOT_ESCAPED(p)  printf("escaped %s: %d (should be 0)\n", #p, __builtin_may_alias(ptr, (p)));
	CHECK_NOT_ESCAPED(&n0);
	CHECK_NOT_ESCAPED(&n1);
	CHECK_NOT_ESCAPED(&n2);
	CHECK_NOT_ESCAPED(&n3);
	CHECK_NOT_ESCAPED(&n4);
	CHECK_NOT_ESCAPED(&n5);
	CHECK_NOT_ESCAPED(&n6);
}
