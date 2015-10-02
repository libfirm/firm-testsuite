#define IL64(x) x##LL
int n = IL64(-1);

#define foo bar
#define call(k)   this is k
#define id(x) call(x ## u)
#define foou repl2

id()
id(foo)
id(foo foo)
