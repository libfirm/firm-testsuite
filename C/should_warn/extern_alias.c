extern void blup(void);
extern int aa;

static void foo(void) { }
static int a;

extern __typeof(foo) blup __attribute__((weak, alias("foo")));
extern int aa __attribute__((alias("a")));
